#undef TRACE_SYSTEM
#define TRACE_SYSTEM md

#if !defined(_MD_TRACE_H) || defined(TRACE_HEADER_MULTI_READ)
#define _MD_TRACE_H

#include <linux/tracepoint.h>

TRACE_EVENT(raid_barrier_rq,

	TP_PROTO(unsigned long time),

	TP_ARGS(time),

	TP_STRUCT__entry(
		__field(	unsigned long,	time	)
	),

	TP_fast_assign(
		__entry->time = jiffies;
	),

	TP_printk("time=%lu", __entry->time)
);

#endif /* _MD_TRACE_H */

/* This part must be outside protection */
#undef TRACE_INCLUDE_PATH
#define TRACE_INCLUDE_PATH .
#define TRACE_INCLUDE_FILE md-trace
#include <trace/define_trace.h>
