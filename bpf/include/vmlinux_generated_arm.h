/* SPDX-License-Identifier: (LGPL-2.1 OR BSD-2-Clause) */

/* generated for 32-bit ARM (armv7l) architecture */

#ifndef __VMLINUX_GENERATED_ARM_H__
#define __VMLINUX_GENERATED_ARM_H__

#ifndef BPF_NO_PRESERVE_ACCESS_INDEX
#pragma clang attribute push (__attribute__((preserve_access_index)), apply_to = record)
#endif

#ifndef __ksym
#define __ksym __attribute__((section(".ksyms")))
#endif

#ifndef __weak
#define __weak __attribute__((weak))
#endif

#ifndef __bpf_fastcall
#define __bpf_fastcall __attribute__((regparm(3)))
#endif

#ifndef __bpf_noinline
#define __bpf_noinline __attribute__((noinline))
#endif

#ifndef __bpf_address_space
#define __bpf_address_space(x)
#endif

#ifndef __always_inline
#define __always_inline inline __attribute__((always_inline))
#endif

#ifndef __noinline
#define __noinline __attribute__((noinline))
#endif

#ifndef __section
#define __section(NAME) __attribute__((section(NAME), used))
#endif

#ifndef __maybe_unused
#define __maybe_unused __attribute__((unused))
#endif

#ifndef __hidden
#define __hidden __attribute__((visibility("hidden")))
#endif

#ifndef __percpu
#define __percpu
#endif

#ifndef __force
#define __force
#endif

#ifndef __nocast
#define __nocast
#endif

#ifndef __safe
#define __safe
#endif

#ifndef __user
#define __user
#endif

#ifndef __kernel
#define __kernel
#endif

#ifndef __init
#define __init
#endif

#ifndef __exit
#define __exit
#endif

#ifndef __iomem
#define __iomem
#endif

#ifndef __read_mostly
#define __read_mostly
#endif

#ifndef __aligned
#define __aligned(x) __attribute__((aligned(x)))
#endif

#ifndef __packed
#define __packed __attribute__((packed))
#endif

#ifndef __must_check
#define __must_check __attribute__((warn_unused_result))
#endif

#ifndef __pure
#define __pure __attribute__((pure))
#endif

#ifndef __used
#define __used __attribute__((used))
#endif

#ifndef __aligned_largest
#define __aligned_largest __attribute__((aligned))
#endif

#ifndef __aligned_u64
#define __aligned_u64 __u64 __attribute__((aligned(8)))
#endif

#ifndef __aligned_be64
#define __aligned_be64 __be64 __attribute__((aligned(8)))
#endif

#ifndef __aligned_le64
#define __aligned_le64 __le64 __attribute__((aligned(8)))
#endif

#ifndef __cacheline_aligned
#define __cacheline_aligned __attribute__((aligned(64)))
#endif

#ifndef __bitwise
#define __bitwise
#endif

#ifndef __bitwise__
#define __bitwise__
#endif

#ifndef __same_type
#define __same_type(a, b) __builtin_types_compatible_p(typeof(a), typeof(b))
#endif

#ifndef __compiler_offsetof
#define __compiler_offsetof(a, b) __builtin_offsetof(a, b)
#endif

#ifndef __randname
#define __randname(x) name
#endif

#ifndef __rcu
#define __rcu
#endif

#ifndef __sched
#define __sched
#endif

#ifndef __deprecated
#define __deprecated
#endif

#ifndef __randomize_layout
#define __randomize_layout __designated_init
#endif

#ifndef __designated_init
#define __designated_init
#endif

#ifndef __latent_entropy
#define __latent_entropy
#endif

#ifndef __visible
#define __visible
#endif

#ifndef __ro_after_init
#define __ro_after_init
#endif

#ifndef __nocfi
#define __nocfi
#endif

#ifndef __cficanonical
#define __cficanonical
#endif

#ifndef __no_sanitize_address
#define __no_sanitize_address
#endif

#ifndef __no_randomize_layout
#define __no_randomize_layout
#endif

#ifndef __no_sanitize_thread
#define __no_sanitize_thread
#endif

#ifndef __no_sanitize_undefined
#define __no_sanitize_undefined
#endif

#ifndef __noscs
#define __noscs
#endif

#ifndef __fallthrough
#define __fallthrough
#endif

#ifndef __gnu_inline
#define __gnu_inline __attribute__((gnu_inline))
#endif

#ifndef __unused
#define __unused __attribute__((unused))
#endif

#ifndef __cold
#define __cold __attribute__((cold))
#endif

#ifndef __externally_visible
#define __externally_visible __attribute__((externally_visible))
#endif

#ifndef __compiletime_warning
#define __compiletime_warning(message)
#endif

#ifndef __compiletime_error
#define __compiletime_error(message)
#endif

#ifndef __compiletime_error_fallback
#define __compiletime_error_fallback(condition)
#endif

#ifndef __malloc
#define __malloc __attribute__((__malloc__))
#endif

#ifndef __assume_aligned
#define __assume_aligned(a, x) __attribute__((__assume_aligned__(x)))
#endif

#ifndef __alloc_size
#define __alloc_size(...) __attribute__((__alloc_size__(__VA_ARGS__)))
#endif

#ifndef __alloc_align
#define __alloc_align(x) __attribute__((__alloc_align__(x)))
#endif

#ifndef __bos
#define __bos(ptr) __builtin_object_size(ptr, 0)
#endif

#ifndef __bos0
#define __bos0(ptr) __builtin_object_size(ptr, 0)
#endif

#ifndef __fortify_function
#define __fortify_function __extern_always_inline
#endif

#ifndef __extern_always_inline
#define __extern_always_inline extern __always_inline
#endif

#ifndef __diag_push
#define __diag_push()
#endif

#ifndef __diag_pop
#define __diag_pop()
#endif

#ifndef __diag_ignore
#define __diag_ignore(compiler, version, option, comment)
#endif

#ifndef __diag_warn
#define __diag_warn(compiler, version, option, comment)
#endif

#ifndef __diag_error
#define __diag_error(compiler, version, option, comment)
#endif

typedef signed char __s8;
typedef unsigned char __u8;
typedef signed short __s16;
typedef unsigned short __u16;
typedef signed int __s32;
typedef unsigned int __u32;
typedef signed long long __s64;
typedef unsigned long long __u64;

typedef __s8 s8;
typedef __u8 u8;
typedef __s16 s16;
typedef __u16 u16;
typedef __s32 s32;
typedef __u32 u32;
typedef __s64 s64;
typedef __u64 u64;

typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;

typedef __u16 __sum16;
typedef __u32 __wsum;

typedef u32 __kernel_dev_t;
typedef u32 __kernel_ino_t;
typedef u16 __kernel_mode_t;
typedef u16 __kernel_nlink_t;
typedef u16 __kernel_uid_t;
typedef u16 __kernel_gid_t;
typedef u32 __kernel_off_t;
typedef s32 __kernel_pid_t;
typedef s32 __kernel_ipc_pid_t;
typedef u32 __kernel_daddr_t;
typedef u32 __kernel_clock_t;
typedef u32 __kernel_size_t;
typedef s32 __kernel_ssize_t;
typedef s32 __kernel_ptrdiff_t;
typedef s32 __kernel_time_t;
typedef s32 __kernel_suseconds_t;
typedef s32 __kernel_clock_t;
typedef s32 __kernel_timer_t;
typedef s32 __kernel_clockid_t;
typedef char * __kernel_caddr_t;
typedef unsigned long __kernel_uid32_t;
typedef unsigned long __kernel_gid32_t;

typedef unsigned short umode_t;
typedef u32 uid_t;
typedef u32 gid_t;
typedef __kernel_pid_t pid_t;
typedef __kernel_dev_t dev_t;
typedef __kernel_ino_t ino_t;
typedef __kernel_mode_t mode_t;
typedef unsigned int nlink_t;
typedef __kernel_off_t off_t;
typedef __kernel_time_t time_t;
typedef __kernel_clock_t clock_t;
typedef __kernel_clockid_t clockid_t;
typedef __kernel_size_t size_t;
typedef __kernel_ssize_t ssize_t;
typedef __kernel_ptrdiff_t ptrdiff_t;
typedef __kernel_timer_t timer_t;
typedef __kernel_uid32_t uid32_t;
typedef __kernel_gid32_t gid32_t;
typedef __kernel_suseconds_t suseconds_t;
typedef u32 uint;
typedef u32 uint32_t;
typedef u64 uint64_t;
typedef u16 uint16_t;
typedef u8 uint8_t;
typedef s32 int32_t;
typedef s64 int64_t;
typedef s16 int16_t;
typedef s8 int8_t;

/* ARM-specific types and definitions */
typedef u32 phys_addr_t;
typedef u32 resource_size_t;
typedef u32 dma_addr_t;

#ifndef BPF_NO_PRESERVE_ACCESS_INDEX
#pragma clang attribute pop
#endif

#endif /* __VMLINUX_GENERATED_ARM_H__ */