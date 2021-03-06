/* Generated by ./xlat/gen.sh from ./xlat/uring_setup_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(IORING_SETUP_IOPOLL) || (defined(HAVE_DECL_IORING_SETUP_IOPOLL) && HAVE_DECL_IORING_SETUP_IOPOLL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IORING_SETUP_IOPOLL) == (1U), "IORING_SETUP_IOPOLL != 1U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IORING_SETUP_IOPOLL 1U
#endif
#if defined(IORING_SETUP_SQPOLL) || (defined(HAVE_DECL_IORING_SETUP_SQPOLL) && HAVE_DECL_IORING_SETUP_SQPOLL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IORING_SETUP_SQPOLL) == (2U), "IORING_SETUP_SQPOLL != 2U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IORING_SETUP_SQPOLL 2U
#endif
#if defined(IORING_SETUP_SQ_AFF) || (defined(HAVE_DECL_IORING_SETUP_SQ_AFF) && HAVE_DECL_IORING_SETUP_SQ_AFF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IORING_SETUP_SQ_AFF) == (4U), "IORING_SETUP_SQ_AFF != 4U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IORING_SETUP_SQ_AFF 4U
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat uring_setup_flags in mpers mode

# else

static const struct xlat_data uring_setup_flags_xdata[] = {
 XLAT(IORING_SETUP_IOPOLL),
 XLAT(IORING_SETUP_SQPOLL),
 XLAT(IORING_SETUP_SQ_AFF),
};
static
const struct xlat uring_setup_flags[1] = { {
 .data = uring_setup_flags_xdata,
 .size = ARRAY_SIZE(uring_setup_flags_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
