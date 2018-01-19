/*
 *  git2r, R bindings to the libgit2 library.
 *  Copyright (C) 2013-2018 The git2r contributors
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License, version 2,
 *  as published by the Free Software Foundation.
 *
 *  git2r is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef INCLUDE_git2r_objects_h
#define INCLUDE_git2r_objects_h

#include <R.h>
#include <Rinternals.h>

extern const char *git2r_S3_class__git_blob;
extern const char *git2r_S3_items__git_blob[];
enum {
    git2r_S3_item__git_blob__sha,
    git2r_S3_item__git_blob__repo};

extern const char *git2r_S3_class__git_branch;
extern const char *git2r_S3_items__git_branch[];
enum {
    git2r_S3_item__git_branch__name,
    git2r_S3_item__git_branch__type,
    git2r_S3_item__git_branch__repo};

extern const char *git2r_S3_class__git_merge_result;
extern const char *git2r_S3_items__git_merge_result[];
enum {
    git2r_S3_item__git_merge_result__up_to_date,
    git2r_S3_item__git_merge_result__fast_forward,
    git2r_S3_item__git_merge_result__conflicts,
    git2r_S3_item__git_merge_result__sha};

extern const char *git2r_S3_class__git_signature;
extern const char *git2r_S3_items__git_signature[];
enum {
    git2r_S3_item__git_signature__name,
    git2r_S3_item__git_signature__email,
    git2r_S3_item__git_signature__when};

extern const char *git2r_S3_class__git_tag;
extern const char *git2r_S3_items__git_tag[];
enum {
    git2r_S3_item__git_tag__sha,
    git2r_S3_item__git_tag__message,
    git2r_S3_item__git_tag__name,
    git2r_S3_item__git_tag__tagger,
    git2r_S3_item__git_tag__target,
    git2r_S3_item__git_tag__repo};

extern const char *git2r_S3_class__git_time;
extern const char *git2r_S3_items__git_time[];
enum {
    git2r_S3_item__git_time__time,
    git2r_S3_item__git_time__offset};

extern const char *git2r_S3_class__git_transfer_progress;
extern const char *git2r_S3_items__git_transfer_progress[];
enum {
    git2r_S3_item__git_transfer_progress__total_objects,
    git2r_S3_item__git_transfer_progress__indexed_objects,
    git2r_S3_item__git_transfer_progress__received_objects,
    git2r_S3_item__git_transfer_progress__local_objects,
    git2r_S3_item__git_transfer_progress__total_deltas,
    git2r_S3_item__git_transfer_progress__indexed_deltas,
    git2r_S3_item__git_transfer_progress__received_bytes};

SEXP git2r_get_list_element(SEXP list, const char *str);

#endif