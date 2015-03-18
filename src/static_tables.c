/* Copyright © 2015 Uli Schlachter
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * Except as contained in this notice, the names of the authors or their
 * institutions shall not be used in advertising or otherwise to promote the
 * sale, use or other dealings in this Software without prior written
 * authorization from the authors.
 */

#include "errors.h"

const char unknown_major_code[] = {
#define ENTRY(i) "Unknown major code " #i "\0"
#include "static_tables.inc"
#undef ENTRY
};

const char unknown_error_code[] = {
#define ENTRY(i) "Unknown error " #i "\0"
#include "static_tables.inc"
#undef ENTRY
};

const char unknown_event_code[] = {
#define ENTRY(i) "Unknown event " #i "\0"
#include "static_tables.inc"
#undef ENTRY
};

#warning TODO: Implement these
const char *xproto_get_name_for_major_code(uint8_t major_code) {
	(void) major_code;
	return NULL;
}

const char *xproto_get_name_for_event(uint8_t event_code) {
	(void) event_code;
	return NULL;
}

const char *xproto_get_name_for_error(uint8_t error_code) {
	(void) error_code;
	return NULL;
}
struct static_extension_info_t find_static_info_for_extension(const char *name) {
	struct static_extension_info_t info = {
		.num_minor = 0,
		.num_events = 0,
		.num_errors = 0,
		.strings_minor = NULL,
		.strings_events = NULL,
		.strings_errors = NULL
	};
	(void) name;
	return info;
}
