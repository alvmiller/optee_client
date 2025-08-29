/* SPDX-License-Identifier: BSD-2-Clause */

#ifndef LIBTEEC_LOCAL_UTILS_H
#define LIBTEEC_LOCAL_UTILS_H

#ifndef MIN
#define MIN(x, y) \
	({ \
		typeof(x) _x = (x); \
		typeof(y) _y = (y); \
		(void)(&_x == &_y); \
		_x < _y ? _x : _y; \
	})
#endif

#endif /*LIBTEEC_LOCAL_UTILS_H*/
