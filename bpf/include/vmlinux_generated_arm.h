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

/* ARM-specific PT_REGS parameter access macros */
#ifdef __TARGET_ARCH_arm
/* ARM only has 4 parameter registers (r0-r3), so PT_PARM5 is not supported */
#ifndef __PT_PARM5_REG
#define __PT_PARM5_REG uregs[0]  /* Fallback to r0 for ARM compatibility */
#endif
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
typedef long long __kernel_loff_t;
typedef __kernel_loff_t loff_t;
/* Network protocol constants */
#define IPPROTO_TCP 6
#define IPPROTO_UDP 17

/* SKB extension constants - now defined in enum skb_ext_id */

/* BPF map type constants */

#define BPF_MAP_TYPE_HASH 1
#define BPF_MAP_TYPE_ARRAY 2
#define BPF_MAP_TYPE_PROG_ARRAY 3
#define BPF_MAP_TYPE_PERF_EVENT_ARRAY 4
#define BPF_MAP_TYPE_PERCPU_HASH 5
#define BPF_MAP_TYPE_PERCPU_ARRAY 6
#define BPF_MAP_TYPE_STACK_TRACE 7
#define BPF_MAP_TYPE_CGROUP_ARRAY 8
#define BPF_MAP_TYPE_LRU_HASH 9
#define BPF_MAP_TYPE_LRU_PERCPU_HASH 10
#define BPF_MAP_TYPE_LPM_TRIE 11
#define BPF_MAP_TYPE_ARRAY_OF_MAPS 12
#define BPF_MAP_TYPE_HASH_OF_MAPS 13
#define BPF_MAP_TYPE_DEVMAP 14
#define BPF_MAP_TYPE_SOCKMAP 15
#define BPF_MAP_TYPE_CPUMAP 16
#define BPF_MAP_TYPE_XSKMAP 17
#define BPF_MAP_TYPE_SOCKHASH 18
#define BPF_MAP_TYPE_CGROUP_STORAGE 19
#define BPF_MAP_TYPE_REUSEPORT_SOCKARRAY 20
#define BPF_MAP_TYPE_PERCPU_CGROUP_STORAGE 21
#define BPF_MAP_TYPE_QUEUE 22
#define BPF_MAP_TYPE_STACK 23
#define BPF_MAP_TYPE_SK_STORAGE 24
#define BPF_MAP_TYPE_DEVMAP_HASH 25
#define BPF_MAP_TYPE_STRUCT_OPS 26
#define BPF_MAP_TYPE_RINGBUF 27
#define BPF_MAP_TYPE_INODE_STORAGE 28
#define BPF_MAP_TYPE_TASK_STORAGE 29
#define BPF_MAP_TYPE_BLOOM_FILTER 30

/* BPF map update flags */
#define BPF_ANY 0
#define BPF_NOEXIST 1
#define BPF_EXIST 2
#define BPF_F_NO_PREALLOC (1U << 0)
#define BPF_F_NO_COMMON_LRU (1U << 1)
#define BPF_F_NUMA_NODE (1U << 2)
#define BPF_F_RDONLY (1U << 3)
#define BPF_F_WRONLY (1U << 4)
#define BPF_F_STACK_BUILD_ID (1U << 5)
#define BPF_F_ZERO_SEED (1U << 6)
#define BPF_F_RDONLY_PROG (1U << 7)
#define BPF_F_WRONLY_PROG (1U << 8)
#define BPF_F_CLONE (1U << 9)
#define BPF_F_MMAPABLE (1U << 10)
#define BPF_F_PRESERVE_ELEMS (1U << 11)
#define BPF_F_INNER_MAP (1U << 12)

/* Additional BPF constants */
#define BPF_F_CURRENT_CPU 0xffffffffULL

/* Atomic and synchronization types */
typedef struct {
    int counter;
} atomic_t;

typedef struct {
	long counter;
} atomic_long_t;

typedef struct {
    unsigned int lock;
} spinlock_t;

typedef struct {
    __u64 counter;
} local64_t;

typedef struct {
    volatile unsigned int lock;
} raw_spinlock_t;

/* Forward declarations for complex types */
struct hrtimer;
struct kernfs_ops;
struct kernfs_open_node;
struct kernfs_root;
struct perf_sample_data;
struct lockdep_subclass_key;
struct lock_class;

/* Additional kernel types */

/* Boolean type for ARM compatibility */
typedef _Bool bool;
#define true 1
#define false 0
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

/* ARM-specific types and definitions */
typedef u32 phys_addr_t;
typedef u32 resource_size_t;
typedef u32 dma_addr_t;

/* Essential kernel types for BPF compatibility */
typedef struct {
	uid_t val;
} kuid_t;

typedef struct {
	gid_t val;
} kgid_t;

/* Essential kernel structures for BPF compatibility */
struct hlist_node {
	struct hlist_node *next, **pprev;
};

/* Basic kernel structures - must be defined early */
struct list_head {
	struct list_head *next, *prev;
};

struct rb_node {
	unsigned long __rb_parent_color;
	struct rb_node *rb_right;
	struct rb_node *rb_left;
};

struct rb_root {
	struct rb_node *rb_node;
};

struct mutex {
	atomic_long_t owner;
	spinlock_t wait_lock;
	struct list_head wait_list;
};

struct rcu_head {
	struct rcu_head *next;
	void (*func)(struct rcu_head *head);
};

struct hlist_head {
	struct hlist_node *first;
};

/* ARM pt_regs structure - must be defined early for typedefs */
struct pt_regs {
	unsigned long uregs[18];
};

/* Essential synchronization structures */
struct raw_spinlock {
	unsigned int slock;
};

struct spinlock {
	raw_spinlock_t rlock;
};

/* Timer structures */
struct timerqueue_node {
	struct rb_node node;
	unsigned long long expires;
};

struct timerqueue_head {
	struct rb_node *rb_root;
};

struct hrtimer_clock_base;

struct hrtimer {
	struct timerqueue_node node;
	unsigned long long _softexpires;
	enum hrtimer_restart (*function)(struct hrtimer *);
	struct hrtimer_clock_base *base;
	unsigned char state;
	unsigned char is_rel;
	unsigned char is_soft;
	unsigned char is_hard;
};

/* UTS namespace structure */
struct new_utsname {
	char sysname[65];
	char nodename[65];
	char release[65];
	char version[65];
	char machine[65];
	char domainname[65];
};

/* RW semaphore structure */
struct rw_semaphore {
	long count;
	struct list_head wait_list;
	raw_spinlock_t wait_lock;
};

/* CPU mask structures */
struct cpumask {
	unsigned long bits[1];
};

/* Optimistic spin queue */
struct optimistic_spin_queue {
	int val;
};

/* Per-CPU reference counting */
struct percpu_ref_data;

struct percpu_ref {
	unsigned long percpu_count_ptr;
	struct percpu_ref_data *data;
};

/* Work structures */
struct work_struct {
	unsigned long data;
	struct list_head entry;
	void (*func)(struct work_struct *work);
};

/* UID/GID mapping structures */
struct uid_gid_extent {
	unsigned int first;
	unsigned int lower_first;
	unsigned int count;
};

struct uid_gid_map {
	unsigned int nr_extents;
	union {
		struct uid_gid_extent extent[5];
		struct {
			struct uid_gid_extent *forward;
			struct uid_gid_extent *reverse;
		};
	};
};

/* Control table structures */
struct ctl_table;

struct ctl_table_header {
	union {
		struct {
			struct ctl_table *ctl_table;
			int used;
			int count;
			int nreg;
		};
		struct rcu_head rcu;
	};
	struct completion *unregistering;
	struct ctl_table *ctl_table_arg;
	struct ctl_table_root *root;
	struct ctl_table_set *set;
	struct ctl_dir *parent;
	struct ctl_node *node;
	struct hlist_head inodes;
};

struct ctl_dir {
	struct ctl_table_header header;
	struct rb_root root;
};

/* Uprobe state structure */
struct xol_area;

struct uprobes_state {
	struct xol_area *xol_area;
};

/* BPF raw tracepoint structure */
struct bpf_raw_tracepoint_args {
	__u64 args[0];
};

/* Network protocol structures */
struct udphdr {
	__be16 source;
	__be16 dest;
	__be16 len;
	__sum16 check;
};

struct tcphdr {
	__be16 source;
	__be16 dest;
	__be32 seq;
	__be32 ack_seq;
	__u16 res1:4,
	      doff:4,
	      fin:1,
	      syn:1,
	      rst:1,
	      psh:1,
	      ack:1,
	      urg:1,
	      ece:1,
	      cwr:1;
	__be16 window;
	__sum16 check;
	__be16 urg_ptr;
};

struct iphdr {
	__u8 ihl:4,
	     version:4;
	__u8 tos;
	__be16 tot_len;
	__be16 id;
	__be16 frag_off;
	__u8 ttl;
	__u8 protocol;
	__sum16 check;
	__be32 saddr;
	__be32 daddr;
};

struct in6_addr {
	union {
		__u8 u6_addr8[16];
		__be16 u6_addr16[8];
		__be32 u6_addr32[4];
	} in6_u;
};

struct ipv6hdr {
	__u8 priority:4,
	     version:4;
	__u8 flow_lbl[3];
	__be16 payload_len;
	__u8 nexthdr;
	__u8 hop_limit;
	struct in6_addr saddr;
	struct in6_addr daddr;
};

struct ethhdr {
	unsigned char h_dest[6];
	unsigned char h_source[6];
	__be16 h_proto;
};

/* Simplified socket structures for BPF compatibility */
struct sock_common {
	__be32 skc_daddr;
	__be32 skc_rcv_saddr;
	__be16 skc_dport;
	__u16 skc_num;
	unsigned short skc_family;
	volatile unsigned char skc_state;
	struct in6_addr skc_v6_daddr;
	struct in6_addr skc_v6_rcv_saddr;
};

struct sock {
	struct sock_common __sk_common;
	__u16 sk_type;
	__u8 sk_protocol;
	__u32 sk_mark;
	__u32 sk_priority;
	void *sk_user_data;
};

/* Socket address type definitions */
typedef unsigned short __kernel_sa_family_t;
typedef __kernel_sa_family_t sa_family_t;

/* IP address structures */
struct in_addr {
	__be32 s_addr;
};

/* Socket address structures */
struct sockaddr {
	__kernel_sa_family_t sa_family;
	char sa_data[14];
};

struct sockaddr_in {
	__kernel_sa_family_t sin_family;
	__be16 sin_port;
	struct in_addr sin_addr;
	unsigned char __pad[8];
};

struct sockaddr_in6 {
	unsigned short int sin6_family;
	__be16 sin6_port;
	__be32 sin6_flowinfo;
	struct in6_addr sin6_addr;
	__u32 sin6_scope_id;
};

/* Additional type definitions needed */
typedef s64 ktime_t;
typedef unsigned int sk_buff_data_t;
typedef struct {
	int counter;
} refcount_t;

/* I/O vector structure */
struct iovec {
	void __user *iov_base;
	__kernel_size_t iov_len;
};

/* Socket buffer structure - simplified for BPF */
struct sk_buff {
	union {
		struct {
			struct sk_buff *next;
			struct sk_buff *prev;
			union {
				struct net_device *dev;
				unsigned long dev_scratch;
			};
		};
		struct rb_node rbnode;
		struct list_head list;
	};
	union {
		struct sock *sk;
		int ip_defrag_offset;
	};
	union {
		ktime_t tstamp;
		u64 skb_mstamp_ns;
	};
	char cb[48] __aligned(8);
	union {
		struct {
			unsigned long _skb_refdst;
			void (*destructor)(struct sk_buff *skb);
		};
		struct list_head tcp_tsorted_anchor;
	};
	unsigned long _nfct;
	unsigned int len;
	unsigned int data_len;
	__u16 mac_len;
	__u16 hdr_len;
	__u16 queue_mapping;
	__u8 __cloned_offset[0];
	__u8 cloned:1,
	     nohdr:1,
	     fclone:2,
	     peeked:1,
	     head_frag:1,
	     pfmemalloc:1,
	     pp_recycle:1;
	__u8 active_extensions;
	union {
		struct {
			__u8 __pkt_type_offset[0];
			__u8 pkt_type:3;
			__u8 ignore_df:1;
			__u8 nf_trace:1;
			__u8 ip_summed:2;
			__u8 ooo_okay:1;
			__u8 l4_hash:1;
			__u8 sw_hash:1;
			__u8 wifi_acked_valid:1;
			__u8 wifi_acked:1;
			__u8 no_fcs:1;
			__u8 encapsulation:1;
			__u8 encap_hdr_csum:1;
			__u8 csum_valid:1;
			__u8 __pkt_vlan_present_offset[0];
			__u8 vlan_present:1;
			__u8 csum_complete_sw:1;
			__u8 csum_level:2;
			__u8 csum_not_inet:1;
			__u8 dst_pending_confirm:1;
			__u8 ndisc_nodetype:2;
			__u8 ipvs_property:1;
			__u8 inner_protocol_type:1;
			__u8 remcsum_offload:1;
			__u8 offload_fwd_mark:1;
			__u8 offload_l3_fwd_mark:1;
			__u8 tc_skip_classify:1;
			__u8 tc_at_ingress:1;
			__u8 redirected:1;
			__u8 from_ingress:1;
			__u8 decrypted:1;
			__u8 slow_gro:1;
			__u8 csum_bad:1;
		};
		__u32 headers_start[0];
	};
	__u32 priority;
	int skb_iif;
	__u32 hash;
	__be16 vlan_proto;
	__u16 vlan_tci;
	union {
		unsigned int napi_id;
		unsigned int sender_cpu;
	};
	__u32 secmark;
	union {
		__u32 mark;
		__u32 reserved_tailroom;
	};
	union {
		__be16 inner_protocol;
		__u8 inner_ipproto;
	};
	__u16 inner_transport_header;
	__u16 inner_network_header;
	__u16 inner_mac_header;
	__be16 protocol;
	__u16 transport_header;
	__u16 network_header;
	__u16 mac_header;
	sk_buff_data_t tail;
	sk_buff_data_t end;
	unsigned char *head;
	unsigned char *data;
	unsigned int truesize;
	refcount_t users;
	struct skb_ext *extensions;
};

/* Missing type definitions for module support */
typedef __u32 Elf32_Sym;

enum module_state {
	MODULE_STATE_LIVE,
	MODULE_STATE_COMING,
	MODULE_STATE_GOING,
	MODULE_STATE_UNFORMED,
};

struct kobject {
	const char *name;
	struct list_head entry;
	struct kobject *parent;
	void *ktype;
	void *kset;
	void *kref;
	unsigned int state_initialized:1;
	unsigned int state_in_sysfs:1;
	unsigned int state_add_uevent_sent:1;
	unsigned int state_remove_uevent_sent:1;
	unsigned int uevent_suppress:1;
};

struct latch_tree_node {
	struct rb_node node[2];
};

struct module_kobject {
	struct kobject kobj;
	struct module *mod;
	struct kobject *drivers_dir;
	struct module_param_attrs *mp;
	struct completion *kobj_completion;
};

struct mod_tree_node {
	struct module *mod;
	struct latch_tree_node node;
};

struct mod_kallsyms {
	Elf32_Sym *symtab;
	char *strtab;
	char *typetab;
};

typedef struct tracepoint * const tracepoint_ptr_t;
/* Module structure - simplified for BPF */
struct module {
	enum module_state state;
	struct list_head list;
	char name[56];
	struct module_kobject mkobj;
	struct module_attribute *modinfo_attrs;
	const char *version;
	const char *srcversion;
	struct kobject *holders_dir;
	const struct kernel_symbol *syms;
	const s32 *crcs;
	unsigned int num_syms;
	struct mutex param_lock;
	struct kernel_param *kp;
	unsigned int num_kp;
	unsigned int num_gpl_syms;
	const struct kernel_symbol *gpl_syms;
	const s32 *gpl_crcs;
	bool sig_ok;
	bool async_probe_requested;
	const struct kernel_symbol *gpl_future_syms;
	const s32 *gpl_future_crcs;
	unsigned int num_gpl_future_syms;
	unsigned int num_exentries;
	struct exception_table_entry *extable;
	int (*init)(void);
	void *init_layout_base;
	void *init_layout_text;
	unsigned int init_layout_size;
	unsigned int init_layout_text_size;
	unsigned int init_layout_ro_size;
	unsigned int init_layout_ro_after_init_size;
	void *core_layout_base;
	void *core_layout_text;
	unsigned int core_layout_size;
	unsigned int core_layout_text_size;
	unsigned int core_layout_ro_size;
	unsigned int core_layout_ro_after_init_size;
	struct mod_tree_node mtn_core;
	struct mod_tree_node mtn_init;
	struct mod_kallsyms __rcu *kallsyms;
	struct mod_kallsyms core_kallsyms;
	struct module_sect_attrs *sect_attrs;
	struct module_notes_attrs *notes_attrs;
	char *args;
	void *percpu;
	unsigned int percpu_size;
	void *noinstr_text_start;
	unsigned int noinstr_text_size;
	unsigned int num_tracepoints;
	tracepoint_ptr_t *tracepoints_ptrs;
	unsigned int num_srcu_structs;
	struct srcu_struct **srcu_struct_ptrs;
	unsigned int num_bpf_raw_events;
	struct bpf_raw_event_map *bpf_raw_events;
	unsigned int btf_data_size;
	void *btf_data;
	struct jump_entry *jump_entries;
	unsigned int num_jump_entries;
	unsigned int num_trace_bprintk_fmt;
	const char **trace_bprintk_fmt_start;
	struct trace_event_call **trace_events;
	unsigned int num_trace_events;
	struct trace_eval_map **trace_evals;
	unsigned int num_trace_evals;
	unsigned int num_ftrace_callsites;
	unsigned long *ftrace_callsites;
	void *kprobes_text_start;
	unsigned int kprobes_text_size;
	unsigned long *kprobe_blacklist;
	unsigned int num_kprobe_blacklist;
	int num_static_call_sites;
	struct static_call_site *static_call_sites;
	unsigned long taints;
};

/* BPF attribute union - simplified for essential fields */
union bpf_attr {
	struct {
		__u32 map_type;
		__u32 key_size;
		__u32 value_size;
		__u32 max_entries;
		__u32 map_flags;
		__u32 inner_map_fd;
		__u32 numa_node;
		char map_name[16];
		__u32 map_ifindex;
		__u32 btf_fd;
		__u32 btf_key_type_id;
		__u32 btf_value_type_id;
		__u32 btf_vmlinux_value_type_id;
		__u64 map_extra;
	};
	struct {
		__u32 map_fd;
		__aligned_u64 key;
		union {
			__aligned_u64 value;
			__aligned_u64 next_key;
		};
		__u64 flags;
	};
	struct {
		__u32 prog_type;
		__u32 insn_cnt;
		__aligned_u64 insns;
		__aligned_u64 license;
		__u32 log_level;
		__u32 log_size;
		__aligned_u64 log_buf;
		__u32 kern_version;
		__u32 prog_flags;
		char prog_name[16];
		__u32 prog_ifindex;
		__u32 expected_attach_type;
		__u32 prog_btf_fd;
		__u32 func_info_rec_size;
		__aligned_u64 func_info;
		__u32 func_info_cnt;
		__u32 line_info_rec_size;
		__aligned_u64 line_info;
		__u32 line_info_cnt;
		__u32 attach_btf_id;
		union {
			__u32 attach_prog_fd;
			__u32 attach_btf_obj_fd;
		};
		__u32 core_relo_cnt;
		__aligned_u64 fd_array;
		__aligned_u64 core_relos;
		__u32 core_relo_rec_size;
	};
};

/* Forward declarations */
struct pid;
struct perf_event;
struct perf_sample_data;
struct file;

struct trace_entry {
	unsigned short type;
	unsigned char flags;
	unsigned char preempt_count;
	int pid;
};

/* Essential kernel constants */
enum pid_type {
	PIDTYPE_PID,
	PIDTYPE_TGID,
	PIDTYPE_PGID,
	PIDTYPE_SID,
	PIDTYPE_MAX,
};

/* Cgroup subsystem IDs */
#define pids_cgrp_id 11

/* Trace event structures */
struct trace_event_raw_sched_process_exec {
	struct trace_entry ent;
	u32 __data_loc_filename;
	pid_t pid;
	pid_t old_pid;
	char __data[0];
};

/* BPF API structure definitions for ARM compatibility */
struct bpf_tunnel_key {
	__u32 tunnel_id;
	union {
		__u32 remote_ipv4;
		__u32 remote_ipv6[4];
	};
	__u8 tunnel_tos;
	__u8 tunnel_ttl;
	__u16 tunnel_ext;
	__u32 tunnel_label;
};

struct bpf_sock_ops {
	__u32 op;
	union {
		__u32 args[4];
		__u32 reply;
		__u32 replylong[4];
	};
	__u32 family;
	__u32 remote_ip4;
	__u32 local_ip4;
	__u32 remote_ip6[4];
	__u32 local_ip6[4];
	__u32 remote_port;
	__u32 local_port;
	__u32 is_fullsock;
	__u32 snd_cwnd;
	__u32 srtt_us;
	__u32 bpf_sock_ops_cb_flags;
	__u32 state;
	__u32 rtt_min;
	__u32 snd_ssthresh;
	__u32 rcv_nxt;
	__u32 snd_nxt;
	__u32 snd_una;
	__u32 mss_cache;
	__u32 ecn_flags;
	__u32 rate_delivered;
	__u32 rate_interval_us;
	__u32 packets_out;
	__u32 retrans_out;
	__u32 total_retrans;
	__u32 segs_in;
	__u32 data_segs_in;
	__u32 segs_out;
	__u32 data_segs_out;
	__u32 lost_out;
	__u32 sacked_out;
	__u32 sk_txhash;
	__u64 bytes_received;
	__u64 bytes_acked;
};

struct sk_msg_md {
	void *data;
	void *data_end;
	__u32 family;
	__u32 remote_ip4;
	__u32 local_ip4;
	__u32 remote_ip6[4];
	__u32 local_ip6[4];
	__u32 remote_port;
	__u32 local_port;
	__u32 size;
};

struct bpf_fib_lookup {
	__u8 family;
	__u8 l4_protocol;
	__be16 sport;
	__be16 dport;
	__u16 tot_len;
	__u32 ifindex;
	union {
		__u8 tos;
		__be32 flowinfo;
		__u32 rt_metric;
	};
	union {
		__be32 ipv4_src;
		__u32 ipv6_src[4];
	};
	union {
		__be32 ipv4_dst;
		__u32 ipv6_dst[4];
	};
	__be16 h_vlan_proto;
	__be16 h_vlan_TCI;
	__u8 smac[6];
	__u8 dmac[6];
};

struct bpf_dynptr {
	void *data;
	__u32 size;
	__u32 offset;
};

/* Simplified BPF-compatible structures using basic types only */
struct inode {
	__u32 i_ino;
	__u32 i_mode;
	__u32 i_uid;
	__u32 i_gid;
	__u64 i_size;
	__u32 i_flags;
	void *i_private;
	unsigned int __i_nlink;  // ARM compatibility field
};

struct seq_file {
	char *buf;
	__u32 size;
	__u32 count;
	__u64 index;
	void *private;
};

/* Additional kernel structures */
struct hlist_bl_node {
	struct hlist_bl_node *next, **pprev;
};

/* Forward declaration for lockdep */
struct lockdep_subclass_key {
	char __one_byte;
};

struct lock_class_key {
	union {
		struct hlist_node hash_entry;
		struct lockdep_subclass_key subkeys[8];
	};
};

struct lockdep_map {
	struct lock_class_key *key;
	struct lock_class *class_cache[2];
	const char *name;
};

struct llist_node {
	struct llist_node *next;
};

/* Missing type definitions for ARM */
typedef struct {
	int counter;
} atomic64_t;

typedef struct {
	spinlock_t lock;
	struct list_head task_list;
} wait_queue_head_t;

typedef void (*perf_overflow_handler_t)(struct perf_event *event, struct perf_sample_data *data, struct pt_regs *regs);

/* Missing struct definitions */
struct rlimit {
	unsigned long rlim_cur;
	unsigned long rlim_max;
};


struct irq_work {
	unsigned long flags;
	struct llist_node llnode;
	void (*func)(struct irq_work *);
};

struct kernfs_elem_dir {
	unsigned long subdirs;
	struct rb_root children;
	struct kernfs_root *root;
};

struct kernfs_elem_symlink {
	struct kernfs_node *target_kn;
};

struct kernfs_elem_attr {
	const struct kernfs_ops *ops;
	struct kernfs_open_node *open;
	loff_t size;
	struct kernfs_node *notify_next;
};

struct perf_event_attr {
	__u32 type;
	__u32 size;
	__u64 config;
	union {
		__u64 sample_period;
		__u64 sample_freq;
	};
	__u64 sample_type;
	__u64 read_format;
	__u64 disabled       : 1,
		inherit	     : 1,
		pinned	     : 1,
		exclusive    : 1,
		exclude_user : 1,
		exclude_kernel : 1,
		exclude_hv   : 1,
		exclude_idle : 1,
		mmap         : 1,
		comm	     : 1,
		freq         : 1,
		inherit_stat : 1,
		enable_on_exec : 1,
		task         : 1,
		watermark    : 1,
		precise_ip   : 2,
		mmap_data    : 1,
		sample_id_all : 1,
		exclude_host : 1,
		exclude_guest : 1,
		exclude_callchain_kernel : 1,
		exclude_callchain_user   : 1,
		mmap2        : 1,
		comm_exec    : 1,
		use_clockid  : 1,
		context_switch : 1,
		write_backward : 1,
		namespaces   : 1,
		ksymbol      : 1,
		bpf_event    : 1,
		aux_output   : 1,
		cgroup       : 1,
		text_poke    : 1,
		build_id     : 1,
		inherit_thread : 1,
		remove_on_exec : 1,
		sigtrap      : 1,
		__reserved_1 : 26;
	union {
		__u32 wakeup_events;
		__u32 wakeup_watermark;
	};
	__u32 bp_type;
	union {
		__u64 bp_addr;
		__u64 kprobe_func;
		__u64 uprobe_path;
		__u64 config1;
	};
	union {
		__u64 bp_len;
		__u64 kprobe_addr;
		__u64 probe_offset;
		__u64 config2;
	};
	__u64 branch_sample_type;
	__u64 sample_regs_user;
	__u32 sample_stack_user;
	__s32 clockid;
	__u64 sample_regs_intr;
	__u32 aux_watermark;
	__u16 sample_max_stack;
	__u16 __reserved_2;
	__u32 aux_sample_size;
	__u32 __reserved_3;
	__u64 sig_data;
};

struct hw_perf_event {
	union {
		struct {
			__u64 config;
			__u64 last_tag;
			unsigned long config_base;
			unsigned long event_base;
			int event_base_rdpmc;
			int idx;
			int last_cpu;
			int flags;
		};
		struct {
			struct hrtimer hrtimer;
		};
		struct {
			struct list_head tp_list;
		};
		struct {
			__u64 pwr_acc;
			__u64 ptsc;
		};
	};
	struct task_struct *target;
	void *addr_filters;
	unsigned long addr_filters_gen;
	int state;
	local64_t period_left;
	__u64 interrupts_seq;
	__u64 interrupts;
	__u64 freq_time_stamp;
	__u64 freq_count_stamp;
};

struct perf_addr_filters_head {
	struct list_head list;
	raw_spinlock_t lock;
	unsigned int nr_file_filters;
};

struct qstr {
	union {
		struct {
			__u32 hash;
			__u32 len;
		};
		__u64 hash_len;
	};
	const unsigned char *name;
};

struct path {
	struct vfsmount *mnt;
	struct dentry *dentry;
};

struct css_set {
	struct cgroup_subsys_state *subsys[12];
	atomic_t refcount;
	struct list_head tasks;
	struct list_head mg_tasks;
	struct list_head cgrp_links;
	struct cgroup *dfl_cgrp;
	struct cgroup_subsys_state *dfl_css;
	struct list_head e_cset_node[12];
	struct list_head threaded_csets;
	struct list_head threaded_csets_node;
	struct hlist_node hlist;
	struct list_head cgrp_links_head;
	struct list_head mg_preload_node;
	struct list_head mg_node;
	struct cgroup *mg_src_cgrp;
	struct cgroup *mg_dst_cgrp;
	struct css_set *mg_dst_cset;
	bool dead;
	struct rcu_head rcu_head;
};

/* Basic namespace structure with common ns field */
struct ns_common {
	atomic_long_t stashed;
	const struct proc_ns_operations *ops;
	unsigned int inum;
	refcount_t count;
};

struct uts_namespace {
	struct ns_common ns;
	struct new_utsname name;
	struct user_namespace *user_ns;
	struct ucounts *ucounts;
};

struct ipc_namespace {
	struct ns_common ns;
	atomic_t count;
	struct user_namespace *user_ns;
	struct ucounts *ucounts;
};

struct mnt_namespace {
	struct ns_common ns;
	atomic_t count;
	struct user_namespace *user_ns;
	struct ucounts *ucounts;
};

struct pid_namespace {
	struct ns_common ns;
	atomic_t count;
	struct user_namespace *user_ns;
	struct ucounts *ucounts;
};

struct net {
	struct ns_common ns;
	atomic_t count;
	struct user_namespace *user_ns;
	struct ucounts *ucounts;
};

struct time_namespace {
	struct ns_common ns;
	atomic_t count;
	struct user_namespace *user_ns;
	struct ucounts *ucounts;
};

struct cgroup_namespace {
	struct ns_common ns;
	atomic_t count;
	struct user_namespace *user_ns;
	struct ucounts *ucounts;
};

/* Forward declarations for additional namespace types */
struct new_utsname;

struct nsproxy {
	atomic_t count;
	struct uts_namespace *uts_ns;
	struct ipc_namespace *ipc_ns;
	struct mnt_namespace *mnt_ns;
	struct pid_namespace *pid_ns_for_children;
	struct net *net_ns;
	struct time_namespace *time_ns;
	struct time_namespace *time_ns_for_children;
	struct cgroup_namespace *cgroup_ns;
};

/* Forward declarations and definitions for mm_struct types */
struct vm_area_struct;
struct core_state;
struct mmu_notifier_subscriptions;
typedef unsigned long pgd_t;
typedef unsigned long pgtable_t;


/* Forward declarations for additional types */
struct xol_area;
struct ctl_table;
struct completion;
struct ctl_table_root;
struct ctl_node;

struct mm_struct {
	struct vm_area_struct *mmap;
	struct rb_root mm_rb;
	u32 vmacache_seqnum;
	unsigned long (*get_unmapped_area)(struct file *filp, unsigned long addr, unsigned long len, unsigned long pgoff, unsigned long flags);
	unsigned long mmap_base;
	unsigned long mmap_legacy_base;
	unsigned long task_size;
	unsigned long highest_vm_end;
	pgd_t *pgd;
	atomic_t mm_users;
	atomic_t mm_count;
	atomic_long_t pgtables_bytes;
	int map_count;
	spinlock_t page_table_lock;
	struct rw_semaphore mmap_lock;
	struct list_head mmlist;
	unsigned long hiwater_rss;
	unsigned long hiwater_vm;
	unsigned long total_vm;
	unsigned long locked_vm;
	unsigned long pinned_vm;
	unsigned long data_vm;
	unsigned long exec_vm;
	unsigned long stack_vm;
	unsigned long def_flags;
	unsigned long start_code, end_code, start_data, end_data;
	unsigned long start_brk, brk, start_stack;
	unsigned long arg_start, arg_end, env_start, env_end;
	struct user_namespace *user_ns;
	struct core_state *core_state;
	atomic_t membarrier_state;
	struct file *exe_file;
	struct mmu_notifier_subscriptions *notifier_subscriptions;
	pgtable_t pmd_huge_pte;
	struct cpumask cpumask_allocation;
	unsigned long numa_next_scan;
	unsigned long numa_scan_offset;
	int numa_scan_seq;
	bool tlb_flush_pending;
	struct uprobes_state uprobes_state;
	atomic_long_t hugetlb_usage;
	struct work_struct async_put_work;
};

struct task_struct {
	int pid;
	int tgid;
	char comm[16];
	struct task_struct __rcu *real_parent;
	struct task_struct __rcu *parent;
	struct fs_struct *fs;
	void *private_data;
	struct css_set __rcu *cgroups;
	struct nsproxy *nsproxy;
	struct pid *thread_pid;
	struct mm_struct *mm;
	const struct cred __rcu *cred;
	int exit_code;
};

struct fs_struct {
	struct path root;
	struct path pwd;
};

/* Additional kernel structures for BPF compatibility */
struct dentry {
	__u32 d_flags;
	struct dentry *d_parent;
	struct qstr d_name;
	struct inode *d_inode;
	void *d_op;
	struct super_block *d_sb;
	unsigned long d_time;
	void *d_fsdata;
	union {
		struct hlist_bl_node d_hash;
		struct rcu_head d_rcu;
	};
	struct dentry *d_alias;
};

struct vfsmount {
	struct dentry *mnt_root;
	struct super_block *mnt_sb;
	int mnt_flags;
	void *mnt_data;
};

struct mount {
	struct hlist_node mnt_hash;
	struct mount *mnt_parent;
	struct dentry *mnt_mountpoint;
	struct vfsmount mnt;
	union {
		struct rcu_head mnt_rcu;
		struct llist_node mnt_llist;
	};
	int mnt_count;
	int mnt_writers;
};

struct bpf_iter__bpf_prog {
	struct bpf_prog *prog;
	struct bpf_iter_meta *meta;
};

struct bpf_prog {
	struct bpf_prog_aux *aux;
	__u32 len;
	__u32 jited_len;
};

struct bpf_prog_aux {
	__u32 id;
	__u32 type;
	char name[16];
};

struct bpf_iter_meta {
	struct seq_file *seq;
	__u64 session_id;
	__u64 seq_num;
};

/* Complete struct definitions for missing types */
struct upid {
	int nr;
	struct pid_namespace *ns;
};

struct pid {
	atomic_t count;
	unsigned int level;
	spinlock_t lock;
	struct hlist_head tasks[3];
	struct rcu_head rcu;
	struct upid numbers[1];
};

struct kernfs_node {
	atomic_t count;
	atomic_t active;
	struct lockdep_map dep_map;
	struct kernfs_node *parent;
	const char *name;
	struct rb_node rb;
	const void *ns;
	unsigned int hash;
	union {
		struct kernfs_elem_dir dir;
		struct kernfs_elem_symlink symlink;
		struct kernfs_elem_attr attr;
	};
	void *priv;
	__u64 id;
	unsigned short flags;
	umode_t mode;
	struct kernfs_iattrs *iattr;
};

typedef struct {
	__u32 cap[2];
} kernel_cap_t;


/* optimistic_spin_queue already defined earlier - removing duplicate */


/* uid_gid_extent already defined earlier - removing duplicate */

/* Duplicate ns_common removed - already defined earlier */
/* refcount_t moved earlier to resolve dependency */

/* Additional missing structures */
struct ctl_table_set {
	int (*is_seen)(struct ctl_table_set *);
	struct ctl_dir dir;
};

/* ctl_dir and ctl_table_header already defined earlier - removing duplicates */

/* Additional missing structures and unions */
union key_payload {
	void __rcu *rcu_data0;
	void *data[4];
};

struct assoc_array {
	struct assoc_array_ptr *root;
	unsigned long nr_leaves_on_tree;
};

struct assoc_array_ptr {
	struct assoc_array_node *node;
};

struct assoc_array_node {
	struct assoc_array_ptr back_pointer;
	u8 parent_slot;
	struct assoc_array_ptr slots[16];
	unsigned long nr_leaves_on_branch;
};

/* work_struct already defined earlier - removing duplicate */

/* Additional missing typedefs */
typedef u32 key_serial_t;
typedef u32 key_perm_t;
typedef s64 time64_t;

struct keyring_index_key {
	unsigned long hash;
	union {
		struct {
			u16 desc_len;
			char desc[0];
		};
		unsigned long x;
	};
	struct key_type *type;
	struct key_tag *domain_tag;
	const char *description;
};

/* Forward declarations for additional types */
struct proc_ns_operations;
struct key_user;
struct ctl_table;
struct completion;
struct ctl_table_root;
struct ctl_node;

struct key {
	atomic_t usage;
	key_serial_t serial;
	union {
		struct list_head graveyard_link;
		struct rb_node serial_node;
	};
	struct rw_semaphore sem;
	struct key_user *user;
	void *security;
	union {
		time64_t expiry;
		time64_t revoked_at;
	};
	time64_t last_used_at;
	kuid_t uid;
	kgid_t gid;
	key_perm_t perm;
	unsigned short quotalen;
	unsigned short datalen;
	short state;
	unsigned long flags;
	union {
		struct keyring_index_key index_key;
		struct {
			unsigned long hash;
			unsigned long len_desc;
			struct key_type *type;
			struct key_tag *domain_tag;
			char *description;
		};
	};
	union {
		union key_payload payload;
		struct {
			struct list_head name_link;
			struct assoc_array keys;
		};
	};
	struct key_restriction *restrict_link;
};

struct user_struct {
	atomic_t __count;
	atomic_t processes;
	atomic_t sigpending;
	atomic_long_t epoll_watches;
	unsigned long mq_bytes;
	unsigned long locked_shm;
	unsigned long unix_inflight;
	atomic_long_t pipe_bufs;
	struct hlist_node uidhash_node;
	kuid_t uid;
	atomic_long_t locked_vm;
	struct rcu_head rcu;
};

struct user_namespace {
	struct uid_gid_map uid_map;
	struct uid_gid_map gid_map;
	struct uid_gid_map projid_map;
	atomic_t count;
	struct user_namespace *parent;
	int level;
	kuid_t owner;
	kgid_t group;
	struct ns_common ns;
	unsigned long flags;
	struct list_head keyring_name_list;
	struct key *user_keyring_register;
	struct rw_semaphore keyring_sem;
	struct work_struct work;
	struct ctl_table_set set;
	struct ctl_table_header *sysctls;
	struct ucounts *ucounts;
	int ucount_max[10];
};

struct group_info {
	atomic_t usage;
	int ngroups;
	kgid_t gid[0];
};

/* Forward declarations for key-related types */
typedef u32 key_serial_t;
typedef u32 key_perm_t;
struct key_type;
struct key_tag;
struct keyring_index_key;
union key_payload;
struct key_restriction;
struct ctl_table_set;
struct ctl_table_header;
struct ucounts;

/* Duplicate uid_gid_map and uid_gid_extent removed - already defined earlier */

/* Duplicate ns_common removed - already defined earlier */

struct cred {
	atomic_t usage;
	atomic_t subscribers;
	void *put_addr;
	unsigned magic;
	kuid_t uid;
	kgid_t gid;
	kuid_t suid;
	kgid_t sgid;
	kuid_t euid;
	kgid_t egid;
	kuid_t fsuid;
	kgid_t fsgid;
	unsigned securebits;
	kernel_cap_t cap_inheritable;
	kernel_cap_t cap_permitted;
	kernel_cap_t cap_effective;
	kernel_cap_t cap_bset;
	kernel_cap_t cap_ambient;
	unsigned char jit_keyring;
	struct key *session_keyring;
	struct key *process_keyring;
	struct key *thread_keyring;
	struct key *request_key_auth;
	void *security;
	struct user_struct *user;
	struct user_namespace *user_ns;
	struct group_info *group_info;
	struct rcu_head rcu;
};

struct linux_binprm {
	char buf[128];
	struct vm_area_struct *vma;
	unsigned long vma_pages;
	struct mm_struct *mm;
	unsigned long p;
	unsigned int cred_prepared:1;
	unsigned int cap_effective:1;
	unsigned int cap_elevated:1;
	unsigned int secureexec:1;
	unsigned int point_of_no_return:1;
	struct file *file;
	struct cred *cred;
	int unsafe;
	unsigned int per_clear;
	int argc, envc;
	const char *filename;
	const char *interp;
	unsigned interp_flags;
	unsigned interp_data;
	unsigned long loader, exec;
	struct rlimit rlim_stack;
	char tcomm[16];
};

/* Duplicate list_head, rb_root, and rb_node removed - already defined earlier */

/* Duplicate kernfs_elem_* structures removed - already defined earlier */

/* Duplicate rlimit removed - already defined earlier */
/* Conflicting local64_t typedef removed - already defined as struct earlier */

/* Forward declarations and typedefs for ftrace types */
struct ftrace_ops;
typedef void (*ftrace_func_t)(unsigned long ip, unsigned long parent_ip, struct ftrace_ops *op, struct pt_regs *regs);

struct ftrace_ops_hash {
	struct ftrace_hash *notrace_hash;
	struct ftrace_hash *filter_hash;
};

struct ftrace_hash {
	unsigned long size_bits;
	struct hlist_head *buckets;
	unsigned long count;
	struct rcu_head rcu;
};

/* keyring_index_key already defined earlier - removing duplicate */

struct ftrace_ops {
	void (*func)(unsigned long ip, unsigned long parent_ip, struct ftrace_ops *op, struct pt_regs *regs);
	unsigned long flags;
	void *private;
	ftrace_func_t saved_func;
	struct ftrace_ops_hash local_hash;
	struct ftrace_ops_hash *func_hash;
	struct ftrace_ops_hash old_hash;
	unsigned long trampoline;
	unsigned long trampoline_size;
	struct list_head list;
	ftrace_func_t ops_func;
};

/* Forward declarations for additional ftrace types */
struct ftrace_hash;

enum perf_event_state {
    PERF_EVENT_STATE_DEAD = -4,
    PERF_EVENT_STATE_EXIT = -3,
    PERF_EVENT_STATE_ERROR = -2,
    PERF_EVENT_STATE_OFF = -1,
    PERF_EVENT_STATE_INACTIVE = 0,
    PERF_EVENT_STATE_ACTIVE = 1,
};

struct perf_event {
    struct list_head event_entry;
    struct list_head sibling_list;
    struct list_head active_list;
    struct rb_node group_node;
    u64 group_index;
    struct list_head migrate_entry;
    struct hlist_node hlist_entry;
    struct list_head active_entry;
    int nr_siblings;
    int group_flags;
    struct perf_event *group_leader;
    struct pmu *pmu;
    void *pmu_private;
    enum perf_event_state state;
    unsigned int attach_state;
    local64_t count;
    atomic64_t child_count;
    u64 total_time_enabled;
    u64 total_time_running;
    u64 tstamp_enabled;
    u64 tstamp_running;
    u64 tstamp_stopped;
    u64 shadow_ctx_time;
    struct perf_event_attr attr;
    u16 header_size;
    u16 id_header_size;
    u16 read_size;
    struct hw_perf_event hw;
    struct perf_event_context *ctx;
    atomic_long_t refcount;
    atomic64_t child_total_time_enabled;
    atomic64_t child_total_time_running;
    struct mutex child_mutex;
    struct list_head child_list;
    struct perf_event *parent;
    int oncpu;
    int cpu;
    struct list_head owner_entry;
    struct task_struct *owner;
    struct mutex mmap_mutex;
    atomic_t mmap_count;
    struct ring_buffer *rb;
    struct list_head rb_entry;
    unsigned long rcu_batches;
    int rcu_pending;
    wait_queue_head_t waitq;
    struct fasync_struct *fasync;
    int pending_wakeup;
    int pending_kill;
    int pending_disable;
    struct irq_work pending;
    atomic_t event_limit;
    struct perf_addr_filters_head addr_filters;
    struct perf_addr_filter_range *addr_filter_ranges;
    unsigned long addr_filters_gen;
    void (*destroy)(struct perf_event *);
    struct rcu_head rcu_head;
    struct pid_namespace *ns;
    u64 id;
    u64 (*clock)(void);
    perf_overflow_handler_t overflow_handler;
    void *overflow_handler_context;
    perf_overflow_handler_t orig_overflow_handler;
    struct bpf_prog *prog;
    struct trace_event_call *tp_event;
    struct event_filter *filter;
    struct ftrace_ops ftrace_ops;
    struct perf_cgroup *cgrp;
    void *security;
    struct list_head sb_list;
};

struct perf_mmap_event {
    struct vm_area_struct *vma;
    const char *file_name;
    int file_size;
    int maj, min;
    u64 ino;
    u64 ino_generation;
    u32 prot, flags;
    u32 build_id_size;
    u8 build_id[20];
    char filename[];
};

/* Missing kernel structures for cgroup support */
struct timer_list {
    struct hlist_node entry;
    unsigned long expires;
    void (*function)(struct timer_list *);
    u32 flags;
};


struct cgroup_file {
    struct kernfs_node *kn;
    unsigned long notified_at;
    struct timer_list notify_timer;
};

/* work_struct already defined earlier - removing duplicate */

struct cgroup_bpf {
    struct bpf_prog_array *effective[32];
    struct list_head progs[32];
    u32 flags[32];
    struct list_head storages;
    struct bpf_prog_array *inactive;
    struct percpu_ref refcnt;
    struct work_struct release_work;
};

/* Forward declarations to resolve circular dependencies */
struct bpf_prog;
struct bpf_cgroup_storage;
struct cgroup;
struct cgroup_root;
struct kernfs_root;
struct seq_file;
struct cgroup_taskset;
struct cftype;

/* Additional kernel types */
typedef unsigned int gfp_t;

/* Duplicate percpu_ref and timer_list removed - already defined earlier */

struct bpf_prog_array_item {
    struct bpf_prog *prog;
    union {
        struct bpf_cgroup_storage *cgroup_storage[2];
        u64 bpf_cookie;
    };
};

struct radix_tree_root {
    spinlock_t xa_lock;
    gfp_t xa_flags;
    void *xa_head;
};

struct bpf_prog_array {
    struct rcu_head rcu;
    struct bpf_prog_array_item items[];
};

struct idr {
    struct radix_tree_root idr_rt;
    unsigned int idr_base;
    unsigned int idr_next;
};

struct seq_operations {
    void * (*start) (struct seq_file *m, loff_t *pos);
    void (*stop) (struct seq_file *m, void *v);
    void * (*next) (struct seq_file *m, void *v, loff_t *pos);
    int (*show) (struct seq_file *m, void *v);
};

/* seq_file already defined earlier - removing duplicate */

struct kernfs_syscall_ops {
    int (*show_options)(struct seq_file *sf, struct kernfs_root *root);
    int (*mkdir)(struct kernfs_node *parent, const char *name, umode_t mode);
    int (*rmdir)(struct kernfs_node *kn);
    int (*rename)(struct kernfs_node *kn, struct kernfs_node *new_parent, const char *new_name);
    int (*show_path)(struct seq_file *sf, struct kernfs_node *kn, struct kernfs_root *root);
};

struct kernfs_root {
    struct kernfs_node *kn;
    unsigned int flags;
    struct idr ino_idr;
    u32 last_id_lowbits;
    u32 id_highbits;
    struct kernfs_syscall_ops *syscall_ops;
    struct list_head supers;
    wait_queue_head_t deactivate_waitq;
};

struct cgroup_subsys_state {
    struct cgroup *cgroup;
    unsigned long flags;
    struct cgroup_subsys_state *parent;
    struct cgroup_subsys *ss;
    struct percpu_ref refcnt;
    struct list_head sibling;
    struct list_head children;
    int id;
    u64 serial_nr;
    atomic_t online_cnt;
    struct work_struct destroy_work;
    struct rcu_head rcu_head;
};

struct cgroup_subsys {
    struct cgroup_subsys_state *(*css_alloc)(struct cgroup_subsys_state *parent_css);
    int (*css_online)(struct cgroup_subsys_state *css);
    void (*css_offline)(struct cgroup_subsys_state *css);
    void (*css_released)(struct cgroup_subsys_state *css);
    void (*css_free)(struct cgroup_subsys_state *css);
    void (*css_reset)(struct cgroup_subsys_state *css);
    int (*can_attach)(struct cgroup_taskset *tset);
    void (*cancel_attach)(struct cgroup_taskset *tset);
    void (*attach)(struct cgroup_taskset *tset);
    void (*post_attach)(void);
    int (*can_fork)(struct task_struct *task, struct css_set *cset);
    void (*cancel_fork)(struct task_struct *task, struct css_set *cset);
    void (*fork)(struct task_struct *task);
    void (*exit)(struct css_set *cset, struct task_struct *old_task, struct task_struct *task);
    void (*release)(struct task_struct *task);
    void (*bind)(struct cgroup_subsys_state *root_css);
    bool early_init:1;
    bool implicit_on_dfl:1;
    bool threaded:1;
    int id;
    const char *name;
    const char *legacy_name;
    struct cgroup_root *root;
    struct idr css_idr;
    struct list_head cfts;
    struct cftype *dfl_cftypes;
    struct cftype *legacy_cftypes;
    unsigned int depends_on;
};

struct cgroup {
    struct cgroup_subsys_state self;
    unsigned long flags;
    int level;
    int max_depth;
    int nr_descendants;
    int nr_dying_descendants;
    int max_descendants;
    int nr_populated_csets;
    int nr_populated_domain_children;
    int nr_populated_threaded_children;
    int nr_threaded_children;
    struct kernfs_node *kn;
    struct cgroup_file procs_file;
    struct cgroup_file events_file;
    u16 subtree_control;
    u16 subtree_ss_mask;
    u16 old_subtree_control;
    u16 old_subtree_ss_mask;
    struct cgroup_subsys_state __rcu *subsys[12];
    struct cgroup *dom_cgrp;
    struct cgroup *old_dom_cgrp;
    struct rcu_head rcu_head;
    struct work_struct release_agent_work;
    struct psi_group *psi;
    struct cgroup_bpf bpf;
    atomic_t congested;
    struct cgroup_root *root;
    struct list_head cset_links;
    struct list_head e_csets[12];
    struct cgroup *parent;
    struct list_head sibling;
    struct list_head children;
    struct list_head files;
    struct cgroup *kn_id_parent;
};

struct cgroup_root {
    struct kernfs_root *kf_root;
    unsigned int subsys_mask;
    int hierarchy_id;
    struct cgroup cgrp;
    u64 cgrp_ancestor_id_storage;
    atomic_t nr_cgrps;
    struct list_head root_list;
    unsigned int flags;
    char release_agent_path[4096];
    char name[64];
};

/* Forward declarations for remaining BPF API structures */
struct bpf_timer;
struct bpf_sock_tuple;
struct file;
struct __sk_buff;
struct super_block;
struct rcu_head;
struct llist_node;

/* Complete struct definitions for BPF compilation */
struct bpf_map {
	__u32 map_type;
	__u32 key_size;
	__u32 value_size;
	__u32 max_entries;
	char name[16];
};

struct socket {
	struct sock *sk;
};

struct load_info {
	const char *name;
	struct module *mod;
	bool sig_ok;
	unsigned long taints;
};

struct skb_ext {
	__u8 offset[1];
};

struct sec_path {
	int len;
	int olen;
};

/*
 * BPF function ID enumeration - required for BPF helper functions
 * This provides access to all 200+ BPF helper functions for ARM
 */
enum bpf_func_id {
	BPF_FUNC_unspec = 0,
	BPF_FUNC_map_lookup_elem = 1,
	BPF_FUNC_map_update_elem = 2,
	BPF_FUNC_map_delete_elem = 3,
	BPF_FUNC_probe_read = 4,
	BPF_FUNC_ktime_get_ns = 5,
	BPF_FUNC_trace_printk = 6,
	BPF_FUNC_get_prandom_u32 = 7,
	BPF_FUNC_get_smp_processor_id = 8,
	BPF_FUNC_skb_store_bytes = 9,
	BPF_FUNC_l3_csum_replace = 10,
	BPF_FUNC_l4_csum_replace = 11,
	BPF_FUNC_tail_call = 12,
	BPF_FUNC_clone_redirect = 13,
	BPF_FUNC_get_current_pid_tgid = 14,
	BPF_FUNC_get_current_uid_gid = 15,
	BPF_FUNC_get_current_comm = 16,
	BPF_FUNC_get_cgroup_classid = 17,
	BPF_FUNC_skb_vlan_push = 18,
	BPF_FUNC_skb_vlan_pop = 19,
	BPF_FUNC_skb_get_tunnel_key = 20,
	BPF_FUNC_skb_set_tunnel_key = 21,
	BPF_FUNC_perf_event_read = 22,
	BPF_FUNC_redirect = 23,
	BPF_FUNC_get_route_realm = 24,
	BPF_FUNC_perf_event_output = 25,
	BPF_FUNC_skb_load_bytes = 26,
	BPF_FUNC_get_stackid = 27,
	BPF_FUNC_csum_diff = 28,
	BPF_FUNC_skb_get_tunnel_opt = 29,
	BPF_FUNC_skb_set_tunnel_opt = 30,
	BPF_FUNC_skb_change_proto = 31,
	BPF_FUNC_skb_change_type = 32,
	BPF_FUNC_skb_under_cgroup = 33,
	BPF_FUNC_get_hash_recalc = 34,
	BPF_FUNC_get_current_task = 35,
	BPF_FUNC_probe_write_user = 36,
	BPF_FUNC_current_task_under_cgroup = 37,
	BPF_FUNC_skb_change_tail = 38,
	BPF_FUNC_skb_pull_data = 39,
	BPF_FUNC_csum_update = 40,
	BPF_FUNC_set_hash_invalid = 41,
	BPF_FUNC_get_numa_node_id = 42,
	BPF_FUNC_skb_change_head = 43,
	BPF_FUNC_xdp_adjust_head = 44,
	BPF_FUNC_probe_read_str = 45,
	BPF_FUNC_get_socket_cookie = 46,
	BPF_FUNC_get_socket_uid = 47,
	BPF_FUNC_set_hash = 48,
	BPF_FUNC_setsockopt = 49,
	BPF_FUNC_skb_adjust_room = 50,
	BPF_FUNC_redirect_map = 51,
	BPF_FUNC_sk_redirect_map = 52,
	BPF_FUNC_sock_map_update = 53,
	BPF_FUNC_xdp_adjust_meta = 54,
	BPF_FUNC_perf_event_read_value = 55,
	BPF_FUNC_perf_prog_read_value = 56,
	BPF_FUNC_getsockopt = 57,
	BPF_FUNC_override_return = 58,
	BPF_FUNC_sock_ops_cb_flags_set = 59,
	BPF_FUNC_msg_redirect_map = 60,
	BPF_FUNC_msg_apply_bytes = 61,
	BPF_FUNC_msg_cork_bytes = 62,
	BPF_FUNC_msg_pull_data = 63,
	BPF_FUNC_bind = 64,
	BPF_FUNC_xdp_adjust_tail = 65,
	BPF_FUNC_skb_get_xfrm_state = 66,
	BPF_FUNC_get_stack = 67,
	BPF_FUNC_skb_load_bytes_relative = 68,
	BPF_FUNC_fib_lookup = 69,
	BPF_FUNC_sock_hash_update = 70,
	BPF_FUNC_msg_redirect_hash = 71,
	BPF_FUNC_sk_redirect_hash = 72,
	BPF_FUNC_lwt_push_encap = 73,
	BPF_FUNC_lwt_seg6_store_bytes = 74,
	BPF_FUNC_lwt_seg6_adjust_srh = 75,
	BPF_FUNC_lwt_seg6_action = 76,
	BPF_FUNC_rc_repeat = 77,
	BPF_FUNC_rc_keydown = 78,
	BPF_FUNC_skb_cgroup_id = 79,
	BPF_FUNC_get_current_cgroup_id = 80,
	BPF_FUNC_get_local_storage = 81,
	BPF_FUNC_sk_select_reuseport = 82,
	BPF_FUNC_skb_ancestor_cgroup_id = 83,
	BPF_FUNC_sk_lookup_tcp = 84,
	BPF_FUNC_sk_lookup_udp = 85,
	BPF_FUNC_sk_release = 86,
	BPF_FUNC_map_push_elem = 87,
	BPF_FUNC_map_pop_elem = 88,
	BPF_FUNC_map_peek_elem = 89,
	BPF_FUNC_msg_push_data = 90,
	BPF_FUNC_msg_pop_data = 91,
	BPF_FUNC_rc_pointer_rel = 92,
	BPF_FUNC_spin_lock = 93,
	BPF_FUNC_spin_unlock = 94,
	BPF_FUNC_sk_fullsock = 95,
	BPF_FUNC_tcp_sock = 96,
	BPF_FUNC_skb_ecn_set_ce = 97,
	BPF_FUNC_get_listener_sock = 98,
	BPF_FUNC_skc_lookup_tcp = 99,
	BPF_FUNC_tcp_check_syncookie = 100,
	BPF_FUNC_sysctl_get_name = 101,
	BPF_FUNC_sysctl_get_current_value = 102,
	BPF_FUNC_sysctl_get_new_value = 103,
	BPF_FUNC_sysctl_set_new_value = 104,
	BPF_FUNC_strtol = 105,
	BPF_FUNC_strtoul = 106,
	BPF_FUNC_sk_storage_get = 107,
	BPF_FUNC_sk_storage_delete = 108,
	BPF_FUNC_send_signal = 109,
	BPF_FUNC_tcp_gen_syncookie = 110,
	BPF_FUNC_skb_output = 111,
	BPF_FUNC_probe_read_user = 112,
	BPF_FUNC_probe_read_kernel = 113,
	BPF_FUNC_probe_read_user_str = 114,
	BPF_FUNC_probe_read_kernel_str = 115,
	BPF_FUNC_tcp_send_ack = 116,
	BPF_FUNC_send_signal_thread = 117,
	BPF_FUNC_jiffies64 = 118,
	BPF_FUNC_read_branch_records = 119,
	BPF_FUNC_get_ns_current_pid_tgid = 120,
	BPF_FUNC_xdp_output = 121,
	BPF_FUNC_get_netns_cookie = 122,
	BPF_FUNC_get_current_ancestor_cgroup_id = 123,
	BPF_FUNC_sk_assign = 124,
	BPF_FUNC_ktime_get_boot_ns = 125,
	BPF_FUNC_seq_printf = 126,
	BPF_FUNC_seq_write = 127,
	BPF_FUNC_sk_cgroup_id = 128,
	BPF_FUNC_sk_ancestor_cgroup_id = 129,
	BPF_FUNC_ringbuf_output = 130,
	BPF_FUNC_ringbuf_reserve = 131,
	BPF_FUNC_ringbuf_submit = 132,
	BPF_FUNC_ringbuf_discard = 133,
	BPF_FUNC_ringbuf_query = 134,
	BPF_FUNC_csum_level = 135,
	BPF_FUNC_skc_to_tcp6_sock = 136,
	BPF_FUNC_skc_to_tcp_sock = 137,
	BPF_FUNC_skc_to_tcp_timewait_sock = 138,
	BPF_FUNC_skc_to_tcp_request_sock = 139,
	BPF_FUNC_skc_to_udp6_sock = 140,
	BPF_FUNC_get_task_stack = 141,
	BPF_FUNC_load_hdr_opt = 142,
	BPF_FUNC_store_hdr_opt = 143,
	BPF_FUNC_reserve_hdr_opt = 144,
	BPF_FUNC_inode_storage_get = 145,
	BPF_FUNC_inode_storage_delete = 146,
	BPF_FUNC_d_path = 147,
	BPF_FUNC_copy_from_user = 148,
	BPF_FUNC_snprintf_btf = 149,
	BPF_FUNC_seq_printf_btf = 150,
	BPF_FUNC_skb_cgroup_classid = 151,
	BPF_FUNC_redirect_neigh = 152,
	BPF_FUNC_per_cpu_ptr = 153,
	BPF_FUNC_this_cpu_ptr = 154,
	BPF_FUNC_redirect_peer = 155,
	BPF_FUNC_task_storage_get = 156,
	BPF_FUNC_task_storage_delete = 157,
	BPF_FUNC_get_current_task_btf = 158,
	BPF_FUNC_bprm_opts_set = 159,
	BPF_FUNC_ktime_get_coarse_ns = 160,
	BPF_FUNC_ima_inode_hash = 161,
	BPF_FUNC_sock_from_file = 162,
	BPF_FUNC_check_mtu = 163,
	BPF_FUNC_for_each_map_elem = 164,
	BPF_FUNC_snprintf = 165,
	BPF_FUNC_sys_bpf = 166,
	BPF_FUNC_btf_find_by_name_kind = 167,
	BPF_FUNC_sys_close = 168,
	BPF_FUNC_timer_init = 169,
	BPF_FUNC_timer_set_callback = 170,
	BPF_FUNC_timer_start = 171,
	BPF_FUNC_timer_cancel = 172,
	BPF_FUNC_get_func_ip = 173,
	BPF_FUNC_get_attach_cookie = 174,
	BPF_FUNC_task_pt_regs = 175,
	BPF_FUNC_get_branch_snapshot = 176,
	BPF_FUNC_trace_vprintk = 177,
	BPF_FUNC_skc_to_unix_sock = 178,
	BPF_FUNC_kallsyms_lookup_name = 179,
	BPF_FUNC_find_vma = 180,
	BPF_FUNC_loop = 181,
	BPF_FUNC_strncmp = 182,
	BPF_FUNC_get_func_arg = 183,
	BPF_FUNC_get_func_ret = 184,
	BPF_FUNC_get_func_arg_cnt = 185,
	BPF_FUNC_get_retval = 186,
	BPF_FUNC_set_retval = 187,
	BPF_FUNC_xdp_get_buff_len = 188,
	BPF_FUNC_xdp_load_bytes = 189,
	BPF_FUNC_xdp_store_bytes = 190,
	BPF_FUNC_copy_from_user_task = 191,
	BPF_FUNC_skb_set_tstamp = 192,
	BPF_FUNC_ima_file_hash = 193,
	BPF_FUNC_kptr_xchg = 194,
	BPF_FUNC_map_lookup_percpu_elem = 195,
	BPF_FUNC_skc_to_mptcp_sock = 196,
	BPF_FUNC_dynptr_from_mem = 197,
	BPF_FUNC_ringbuf_reserve_dynptr = 198,
	BPF_FUNC_ringbuf_submit_dynptr = 199,
	BPF_FUNC_ringbuf_discard_dynptr = 200,
	BPF_FUNC_dynptr_read = 201,
	BPF_FUNC_dynptr_write = 202,
	BPF_FUNC_dynptr_data = 203,
	BPF_FUNC_tcp_raw_gen_syncookie_ipv4 = 204,
	BPF_FUNC_tcp_raw_gen_syncookie_ipv6 = 205,
	BPF_FUNC_tcp_raw_check_syncookie_ipv4 = 206,
	BPF_FUNC_tcp_raw_check_syncookie_ipv6 = 207,
	BPF_FUNC_ktime_get_tai_ns = 208,
	BPF_FUNC_user_ringbuf_drain = 209,
	BPF_FUNC_cgrp_storage_get = 210,
	BPF_FUNC_cgrp_storage_delete = 211,
	__BPF_FUNC_MAX_ID = 212,
};

/* Simplified struct definitions needed by BPF programs */
struct file {
	void *f_u_padding[2];
	struct path f_path;
	struct inode *f_inode;
	void *f_op;
	void *f_lock;
	int f_write_hint;
	void *f_count;
	unsigned int f_flags;
	unsigned int f_mode;
	void *f_pos_lock;
	long long f_pos;
	void *f_owner;
	const struct cred *f_cred;
	void *f_ra;
	unsigned long long f_version;
	void *f_security;
	void *private_data;
	void *f_ep_links[2];
	void *f_tfile_llink[2];
	void *f_mapping;
	unsigned int f_wb_err;
	unsigned int f_sb_err;
};

struct kiocb {
	struct file *ki_filp;
	long long ki_pos;
	void *ki_complete;
	void *private;
	int ki_flags;
	unsigned short ki_hint;
	unsigned short ki_ioprio;
	unsigned int ki_cookie;
};

struct filename {
	const char *name;
	const char *uptr;
	int refcnt;
	void *aname;
	char iname[256];
};

struct net_device {
	char name[16];
	void *name_node;
	void *ifalias;
	unsigned long mem_end;
	unsigned long mem_start;
	unsigned long base_addr;
	int irq;
	unsigned long state;
	void *dev_list[2];
	void *napi_list[2];
	void *unreg_list[2];
	void *close_list[2];
	void *ptype_all[2];
	void *ptype_specific[2];
	struct {
		void *upper[2];
		void *lower[2];
	} adj_list;
	unsigned long long features;
	unsigned long long hw_features;
	unsigned long long wanted_features;
	unsigned long long vlan_features;
	unsigned long long hw_enc_features;
	unsigned long long mpls_features;
	unsigned long long gso_partial_features;
	int ifindex;
	int group;
	void *stats;
	void *rx_dropped;
	void *tx_dropped;
	void *rx_nohandler;
	void *carrier_up_count;
	void *carrier_down_count;
	void *wireless_handlers;
	void *wireless_data;
	void *netdev_ops;
	void *ethtool_ops;
	void *l3mdev_ops;
	void *ndisc_ops;
	void *xfrmdev_ops;
	void *tlsdev_ops;
	void *header_ops;
	unsigned int flags;
	unsigned int priv_flags;
	unsigned short gflags;
	unsigned short padded;
	unsigned char operstate;
	unsigned char link_mode;
	unsigned char if_port;
	unsigned char dma;
	unsigned int mtu;
	unsigned int min_mtu;
	unsigned int max_mtu;
	unsigned short type;
	unsigned short hard_header_len;
	unsigned char min_header_len;
	unsigned short needed_headroom;
	unsigned short needed_tailroom;
	unsigned char perm_addr[32];
	unsigned char addr_assign_type;
	unsigned char addr_len;
	unsigned char upper_level;
	unsigned char lower_level;
	unsigned short neigh_priv_len;
	unsigned short dev_id;
	unsigned short dev_port;
	void *addr_list_lock;
	unsigned char name_assign_type;
	bool uc_promisc;
	void *uc;
	void *mc;
	void *dev_addrs;
	void *queues_kset;
	unsigned int promiscuity;
	unsigned int allmulti;
	void *vlan_info;
	void *dsa_ptr;
	void *tipc_ptr;
	void *atalk_ptr;
	void *ip_ptr;
	void *dn_ptr;
	void *ip6_ptr;
	void *ax25_ptr;
	void *ieee80211_ptr;
	void *ieee802154_ptr;
	void *mpls_ptr;
	unsigned long last_rx;
	unsigned char *dev_addr;
	void *_rx;
	unsigned int num_rx_queues;
	unsigned int real_num_rx_queues;
	void *xdp_prog;
	unsigned long gro_flush_timeout;
	void *rx_handler;
	void *rx_handler_data;
	void *miniq_ingress;
	void *ingress_queue;
	void *nf_hooks_ingress;
	unsigned char broadcast[32];
	void *rx_cpu_rmap;
	void *index_hlist[2];
	void *_tx;
	unsigned int num_tx_queues;
	unsigned int real_num_tx_queues;
	void *qdisc;
	void *qdisc_hash[16];
	unsigned int tx_queue_len;
	void *tx_global_lock;
	int watchdog_timeo;
	void *xps_cpus_map;
	void *xps_rxqs_map;
	void *miniq_egress;
	void *watchdog_timer;
	int *pcpu_refcnt;
	void *todo_list[2];
	void *link_watch_list[2];
	unsigned char reg_state;
	bool dismantle;
	unsigned short rtnl_link_state;
	bool needs_free_netdev;
	void *priv_destructor;
	void *npinfo;
	void *nd_net;
	void *ml_priv;
	void *garp_port;
	void *mrp_port;
	void *dev_device;
	void *sysfs_groups[4];
	void *sysfs_rx_queue_group;
	void *rtnl_link_ops;
	unsigned int gso_max_size;
	unsigned short gso_max_segs;
	unsigned short gso_min_segs;
	unsigned int gso_ipv4_max_size;
	void *dcbnl_ops;
	short num_tc;
	void *tc_to_txq[16];
	unsigned char prio_tc_map[16];
	unsigned int fcoe_ddp_xid;
	void *priomap;
	void *phydev;
	void *sfp_bus;
	void *qdisc_tx_busylock;
	bool proto_down;
	unsigned int wol_enabled:1;
	unsigned int threaded:1;
	void *net_notifier_list[2];
	void *macsec_ops;
	void *udp_tunnel_nic_info;
	void *udp_tunnel_nic;
	unsigned int xdp_features;
	void *xdp_state[3];
};

struct iov_iter {
	unsigned char iter_type;
	bool nofault;
	bool data_source;
	bool user_backed;
	size_t iov_offset;
	size_t count;
	union {
		const struct kvec *kvec;
		const struct iovec *iov;
		void *ubuf;  /* ARM compatibility field */
	};
	unsigned long nr_segs;
};

struct kvec {
	void *iov_base;
	size_t iov_len;
};

/* Enum definitions */
enum skb_ext_id {
	SKB_EXT_SEC_PATH = 0,
	SKB_EXT_NUM,
};

enum iter_type {
	ITER_IOVEC = 0,
	ITER_KVEC = 1,
	ITER_BVEC = 2,
	ITER_PIPE = 3,
	ITER_XARRAY = 4,
	ITER_DISCARD = 5,
	ITER_UBUF = 6,
};

/* BPF constants */
#define BPF_F_USER_STACK		(1U << 8)

/*
 * ARM pt_regs structure for BPF compatibility
 *
 * This structure matches the actual ARM kernel pt_regs structure
 * from arch/arm/include/asm/ptrace.h and provides the uregs[] array
 * expected by bpf_tracing.h for ARM register access.
 *
 * ARM register layout in uregs[]:
 * - uregs[0-12] = r0-r12 (general purpose registers)
 * - uregs[13] = sp (stack pointer)
 * - uregs[14] = lr (link register)
 * - uregs[15] = pc (program counter)
 * - uregs[16] = cpsr (current program status register)
 * - uregs[17] = orig_r0 (original r0 value for syscalls)
 */

typedef struct pt_regs bpf_user_pt_regs_t;

#ifndef BPF_NO_PRESERVE_ACCESS_INDEX
#pragma clang attribute pop
#endif

#endif /* __VMLINUX_GENERATED_ARM_H__ */