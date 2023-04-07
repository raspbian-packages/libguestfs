/* libguestfs generated file
 * WARNING: THIS FILE IS GENERATED FROM THE FOLLOWING FILES:
 *          generator/bindtests.ml
 *          and from the code in the generator/ subdirectory.
 * ANY CHANGES YOU MAKE TO THIS FILE WILL BE LOST.
 *
 * Copyright (C) 2009-2023 Hiroyuki Katsura <hiroyuki.katsura.0513@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

extern crate guestfs;
use guestfs::*;
use std::default::Default;

fn main() {
    let g = match Handle::create() {
        Ok(g) => g,
        Err(e) => panic!("could not create handle {:?}", e),
    };
    g.internal_test("abc", Some("def"), &vec![], false, 0, 0i64, "123", "456", &[97, 98, 99, 0, 97, 98, 99], InternalTestOptArgs{obool: Some(true), oint: Some(1), oint64: Some(9223372036854775807i64), .. Default::default()}).expect("failed to run");
    g.internal_test("abc", None, &vec![], false, 0, 0i64, "123", "456", &[97, 98, 99, 0, 97, 98, 99], InternalTestOptArgs{oint64: Some(1i64), ostring: Some("string"), .. Default::default()}).expect("failed to run");
    g.internal_test("", Some("def"), &vec![], false, 0, 0i64, "123", "456", &[97, 98, 99, 0, 97, 98, 99], InternalTestOptArgs{obool: Some(false), oint64: Some(-9223372036854775808i64), .. Default::default()}).expect("failed to run");
    g.internal_test("", Some(""), &vec![], false, 0, 0i64, "123", "456", &[97, 98, 99, 0, 97, 98, 99], InternalTestOptArgs{.. Default::default()}).expect("failed to run");
    g.internal_test("abc", Some("def"), &vec!["1"], false, 0, 0i64, "123", "456", &[97, 98, 99, 0, 97, 98, 99], Default::default()).expect("failed to run");
    g.internal_test("abc", Some("def"), &vec!["1", "2"], false, 0, 0i64, "123", "456", &[97, 98, 99, 0, 97, 98, 99], Default::default()).expect("failed to run");
    g.internal_test("abc", Some("def"), &vec!["1"], true, 0, 0i64, "123", "456", &[97, 98, 99, 0, 97, 98, 99], Default::default()).expect("failed to run");
    g.internal_test("abc", Some("def"), &vec!["1"], false, -1, -1i64, "123", "456", &[97, 98, 99, 0, 97, 98, 99], Default::default()).expect("failed to run");
    g.internal_test("abc", Some("def"), &vec!["1"], false, -2, -2i64, "123", "456", &[97, 98, 99, 0, 97, 98, 99], Default::default()).expect("failed to run");
    g.internal_test("abc", Some("def"), &vec!["1"], false, 1, 1i64, "123", "456", &[97, 98, 99, 0, 97, 98, 99], Default::default()).expect("failed to run");
    g.internal_test("abc", Some("def"), &vec!["1"], false, 2, 2i64, "123", "456", &[97, 98, 99, 0, 97, 98, 99], Default::default()).expect("failed to run");
    g.internal_test("abc", Some("def"), &vec!["1"], false, 4095, 9223372036854775807i64, "123", "456", &[97, 98, 99, 0, 97, 98, 99], Default::default()).expect("failed to run");
    g.internal_test("abc", Some("def"), &vec!["1"], false, 0, -9223372036854775808i64, "", "", &[97, 98, 99, 0, 97, 98, 99], Default::default()).expect("failed to run");
    g.internal_test("abc", Some("def"), &vec![], false, 0, 0i64, "123", "456", &[97, 98, 99, 0, 97, 98, 99], InternalTestOptArgs{ostringlist: Some(&[]), .. Default::default()}).expect("failed to run");
    g.internal_test("abc", Some("def"), &vec![], false, 0, 0i64, "123", "456", &[97, 98, 99, 0, 97, 98, 99], InternalTestOptArgs{ostringlist: Some(&["optelem1"]), .. Default::default()}).expect("failed to run");
    g.internal_test("abc", Some("def"), &vec![], false, 0, 0i64, "123", "456", &[97, 98, 99, 0, 97, 98, 99], InternalTestOptArgs{ostringlist: Some(&["optelem1", "optelem2"]), .. Default::default()}).expect("failed to run");
    g.internal_test("abc", Some("def"), &vec![], false, 0, 0i64, "123", "456", &[97, 98, 99, 0, 97, 98, 99], InternalTestOptArgs{ostringlist: Some(&["optelem1", "optelem2", "optelem3"]), .. Default::default()}).expect("failed to run");
    println!("EOF");
}
