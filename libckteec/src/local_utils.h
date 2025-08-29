/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (c) 2020, Linaro Limited
 */

#ifndef LIBCKTEEC_LOCAL_UTILS_H
#define LIBCKTEEC_LOCAL_UTILS_H

#define BUILD_BUG_ON_ZERO(e) \
	(sizeof(struct { int:-!!(e)*1234; }))
#define SAME_TYPE(a, b) \
	__builtin_types_compatible_p(typeof(a), typeof(b))
#define MUST_BE_ARRAY(array) \
	BUILD_BUG_ON_ZERO(SAME_TYPE((array), &(*array)))

#define ARRAY_SIZE(array) ( \
	(sizeof(array) / sizeof(*array)) + MUST_BE_ARRAY(array))

#define COMPILE_TIME_ASSERT(x) \
	do { \
		switch (0) { case 0: case ((x) ? 1: 0) : default : break; } \
	} while (0)

#endif /*LIBCKTEEC_LOCAL_UTILS_H*/
