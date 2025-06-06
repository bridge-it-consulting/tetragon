/* SPDX-License-Identifier: (LGPL-2.1 OR BSD-2-Clause) */

#ifndef __ARM_PT_REGS_COMPAT_H__
#define __ARM_PT_REGS_COMPAT_H__

/*
 * ARM pt_regs structure compatibility layer
 * 
 * This provides the ARM pt_regs structure that matches the register
 * access patterns expected by bpf_tracing.h for ARM architecture.
 * 
 * The ARM register macros in bpf_tracing.h expect uregs[] array:
 * - __PT_PARM1_REG uregs[0]  (r0)
 * - __PT_PARM2_REG uregs[1]  (r1)
 * - __PT_FP_REG uregs[11]    (frame pointer)
 * - __PT_IP_REG uregs[12]    (instruction pointer)
 * - __PT_SP_REG uregs[13]    (stack pointer)
 * - __PT_RET_REG uregs[14]   (return register)
 */

struct pt_regs {
	long uregs[18];  /* ARM user registers r0-r17 */
};

typedef struct pt_regs bpf_user_pt_regs_t;

#endif /* __ARM_PT_REGS_COMPAT_H__ */
