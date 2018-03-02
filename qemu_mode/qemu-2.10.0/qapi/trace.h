/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_QAPI_GENERATED_TRACERS_H
#define TRACE_QAPI_GENERATED_TRACERS_H

#include "qemu-common.h"
#include "trace/control.h"

extern TraceEvent _TRACE_VISIT_FREE_EVENT;
extern TraceEvent _TRACE_VISIT_COMPLETE_EVENT;
extern TraceEvent _TRACE_VISIT_START_STRUCT_EVENT;
extern TraceEvent _TRACE_VISIT_CHECK_STRUCT_EVENT;
extern TraceEvent _TRACE_VISIT_END_STRUCT_EVENT;
extern TraceEvent _TRACE_VISIT_START_LIST_EVENT;
extern TraceEvent _TRACE_VISIT_NEXT_LIST_EVENT;
extern TraceEvent _TRACE_VISIT_CHECK_LIST_EVENT;
extern TraceEvent _TRACE_VISIT_END_LIST_EVENT;
extern TraceEvent _TRACE_VISIT_START_ALTERNATE_EVENT;
extern TraceEvent _TRACE_VISIT_END_ALTERNATE_EVENT;
extern TraceEvent _TRACE_VISIT_OPTIONAL_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_ENUM_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_INT_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_UINT8_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_UINT16_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_UINT32_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_UINT64_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_INT8_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_INT16_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_INT32_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_INT64_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_SIZE_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_BOOL_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_STR_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_NUMBER_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_ANY_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_NULL_EVENT;
extern uint16_t _TRACE_VISIT_FREE_DSTATE;
extern uint16_t _TRACE_VISIT_COMPLETE_DSTATE;
extern uint16_t _TRACE_VISIT_START_STRUCT_DSTATE;
extern uint16_t _TRACE_VISIT_CHECK_STRUCT_DSTATE;
extern uint16_t _TRACE_VISIT_END_STRUCT_DSTATE;
extern uint16_t _TRACE_VISIT_START_LIST_DSTATE;
extern uint16_t _TRACE_VISIT_NEXT_LIST_DSTATE;
extern uint16_t _TRACE_VISIT_CHECK_LIST_DSTATE;
extern uint16_t _TRACE_VISIT_END_LIST_DSTATE;
extern uint16_t _TRACE_VISIT_START_ALTERNATE_DSTATE;
extern uint16_t _TRACE_VISIT_END_ALTERNATE_DSTATE;
extern uint16_t _TRACE_VISIT_OPTIONAL_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_ENUM_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_INT_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_UINT8_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_UINT16_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_UINT32_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_UINT64_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_INT8_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_INT16_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_INT32_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_INT64_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_SIZE_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_BOOL_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_STR_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_NUMBER_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_ANY_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_NULL_DSTATE;
#define TRACE_VISIT_FREE_ENABLED 1
#define TRACE_VISIT_COMPLETE_ENABLED 1
#define TRACE_VISIT_START_STRUCT_ENABLED 1
#define TRACE_VISIT_CHECK_STRUCT_ENABLED 1
#define TRACE_VISIT_END_STRUCT_ENABLED 1
#define TRACE_VISIT_START_LIST_ENABLED 1
#define TRACE_VISIT_NEXT_LIST_ENABLED 1
#define TRACE_VISIT_CHECK_LIST_ENABLED 1
#define TRACE_VISIT_END_LIST_ENABLED 1
#define TRACE_VISIT_START_ALTERNATE_ENABLED 1
#define TRACE_VISIT_END_ALTERNATE_ENABLED 1
#define TRACE_VISIT_OPTIONAL_ENABLED 1
#define TRACE_VISIT_TYPE_ENUM_ENABLED 1
#define TRACE_VISIT_TYPE_INT_ENABLED 1
#define TRACE_VISIT_TYPE_UINT8_ENABLED 1
#define TRACE_VISIT_TYPE_UINT16_ENABLED 1
#define TRACE_VISIT_TYPE_UINT32_ENABLED 1
#define TRACE_VISIT_TYPE_UINT64_ENABLED 1
#define TRACE_VISIT_TYPE_INT8_ENABLED 1
#define TRACE_VISIT_TYPE_INT16_ENABLED 1
#define TRACE_VISIT_TYPE_INT32_ENABLED 1
#define TRACE_VISIT_TYPE_INT64_ENABLED 1
#define TRACE_VISIT_TYPE_SIZE_ENABLED 1
#define TRACE_VISIT_TYPE_BOOL_ENABLED 1
#define TRACE_VISIT_TYPE_STR_ENABLED 1
#define TRACE_VISIT_TYPE_NUMBER_ENABLED 1
#define TRACE_VISIT_TYPE_ANY_ENABLED 1
#define TRACE_VISIT_TYPE_NULL_ENABLED 1
#include "qemu/log.h"


#define TRACE_VISIT_FREE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_FREE) || \
    false)

static inline void _nocheck__trace_visit_free(void * v)
{
    if (trace_event_get_state(TRACE_VISIT_FREE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_free " "v=%p" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v);
    }
}

static inline void trace_visit_free(void * v)
{
    if (true) {
        _nocheck__trace_visit_free(v);
    }
}

#define TRACE_VISIT_COMPLETE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_COMPLETE) || \
    false)

static inline void _nocheck__trace_visit_complete(void * v, void * opaque)
{
    if (trace_event_get_state(TRACE_VISIT_COMPLETE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_complete " "v=%p opaque=%p" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v, opaque);
    }
}

static inline void trace_visit_complete(void * v, void * opaque)
{
    if (true) {
        _nocheck__trace_visit_complete(v, opaque);
    }
}

#define TRACE_VISIT_START_STRUCT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_START_STRUCT) || \
    false)

static inline void _nocheck__trace_visit_start_struct(void * v, const char * name, void * obj, size_t size)
{
    if (trace_event_get_state(TRACE_VISIT_START_STRUCT)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_start_struct " "v=%p name=%s obj=%p size=%zu" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v, name, obj, size);
    }
}

static inline void trace_visit_start_struct(void * v, const char * name, void * obj, size_t size)
{
    if (true) {
        _nocheck__trace_visit_start_struct(v, name, obj, size);
    }
}

#define TRACE_VISIT_CHECK_STRUCT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_CHECK_STRUCT) || \
    false)

static inline void _nocheck__trace_visit_check_struct(void * v)
{
    if (trace_event_get_state(TRACE_VISIT_CHECK_STRUCT)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_check_struct " "v=%p" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v);
    }
}

static inline void trace_visit_check_struct(void * v)
{
    if (true) {
        _nocheck__trace_visit_check_struct(v);
    }
}

#define TRACE_VISIT_END_STRUCT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_END_STRUCT) || \
    false)

static inline void _nocheck__trace_visit_end_struct(void * v, void * obj)
{
    if (trace_event_get_state(TRACE_VISIT_END_STRUCT)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_end_struct " "v=%p obj=%p" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v, obj);
    }
}

static inline void trace_visit_end_struct(void * v, void * obj)
{
    if (true) {
        _nocheck__trace_visit_end_struct(v, obj);
    }
}

#define TRACE_VISIT_START_LIST_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_START_LIST) || \
    false)

static inline void _nocheck__trace_visit_start_list(void * v, const char * name, void * obj, size_t size)
{
    if (trace_event_get_state(TRACE_VISIT_START_LIST)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_start_list " "v=%p name=%s obj=%p size=%zu" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v, name, obj, size);
    }
}

static inline void trace_visit_start_list(void * v, const char * name, void * obj, size_t size)
{
    if (true) {
        _nocheck__trace_visit_start_list(v, name, obj, size);
    }
}

#define TRACE_VISIT_NEXT_LIST_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_NEXT_LIST) || \
    false)

static inline void _nocheck__trace_visit_next_list(void * v, void * tail, size_t size)
{
    if (trace_event_get_state(TRACE_VISIT_NEXT_LIST)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_next_list " "v=%p tail=%p size=%zu" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v, tail, size);
    }
}

static inline void trace_visit_next_list(void * v, void * tail, size_t size)
{
    if (true) {
        _nocheck__trace_visit_next_list(v, tail, size);
    }
}

#define TRACE_VISIT_CHECK_LIST_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_CHECK_LIST) || \
    false)

static inline void _nocheck__trace_visit_check_list(void * v)
{
    if (trace_event_get_state(TRACE_VISIT_CHECK_LIST)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_check_list " "v=%p" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v);
    }
}

static inline void trace_visit_check_list(void * v)
{
    if (true) {
        _nocheck__trace_visit_check_list(v);
    }
}

#define TRACE_VISIT_END_LIST_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_END_LIST) || \
    false)

static inline void _nocheck__trace_visit_end_list(void * v, void * obj)
{
    if (trace_event_get_state(TRACE_VISIT_END_LIST)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_end_list " "v=%p obj=%p" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v, obj);
    }
}

static inline void trace_visit_end_list(void * v, void * obj)
{
    if (true) {
        _nocheck__trace_visit_end_list(v, obj);
    }
}

#define TRACE_VISIT_START_ALTERNATE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_START_ALTERNATE) || \
    false)

static inline void _nocheck__trace_visit_start_alternate(void * v, const char * name, void * obj, size_t size)
{
    if (trace_event_get_state(TRACE_VISIT_START_ALTERNATE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_start_alternate " "v=%p name=%s obj=%p size=%zu" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v, name, obj, size);
    }
}

static inline void trace_visit_start_alternate(void * v, const char * name, void * obj, size_t size)
{
    if (true) {
        _nocheck__trace_visit_start_alternate(v, name, obj, size);
    }
}

#define TRACE_VISIT_END_ALTERNATE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_END_ALTERNATE) || \
    false)

static inline void _nocheck__trace_visit_end_alternate(void * v, void * obj)
{
    if (trace_event_get_state(TRACE_VISIT_END_ALTERNATE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_end_alternate " "v=%p obj=%p" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v, obj);
    }
}

static inline void trace_visit_end_alternate(void * v, void * obj)
{
    if (true) {
        _nocheck__trace_visit_end_alternate(v, obj);
    }
}

#define TRACE_VISIT_OPTIONAL_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_OPTIONAL) || \
    false)

static inline void _nocheck__trace_visit_optional(void * v, const char * name, bool * present)
{
    if (trace_event_get_state(TRACE_VISIT_OPTIONAL)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_optional " "v=%p name=%s present=%p" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v, name, present);
    }
}

static inline void trace_visit_optional(void * v, const char * name, bool * present)
{
    if (true) {
        _nocheck__trace_visit_optional(v, name, present);
    }
}

#define TRACE_VISIT_TYPE_ENUM_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_ENUM) || \
    false)

static inline void _nocheck__trace_visit_type_enum(void * v, const char * name, int * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_ENUM)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_type_enum " "v=%p name=%s obj=%p" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v, name, obj);
    }
}

static inline void trace_visit_type_enum(void * v, const char * name, int * obj)
{
    if (true) {
        _nocheck__trace_visit_type_enum(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_INT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_INT) || \
    false)

static inline void _nocheck__trace_visit_type_int(void * v, const char * name, int64_t * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_INT)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_type_int " "v=%p name=%s obj=%p" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v, name, obj);
    }
}

static inline void trace_visit_type_int(void * v, const char * name, int64_t * obj)
{
    if (true) {
        _nocheck__trace_visit_type_int(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_UINT8_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_UINT8) || \
    false)

static inline void _nocheck__trace_visit_type_uint8(void * v, const char * name, uint8_t * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_UINT8)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_type_uint8 " "v=%p name=%s obj=%p" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v, name, obj);
    }
}

static inline void trace_visit_type_uint8(void * v, const char * name, uint8_t * obj)
{
    if (true) {
        _nocheck__trace_visit_type_uint8(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_UINT16_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_UINT16) || \
    false)

static inline void _nocheck__trace_visit_type_uint16(void * v, const char * name, uint16_t * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_UINT16)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_type_uint16 " "v=%p name=%s obj=%p" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v, name, obj);
    }
}

static inline void trace_visit_type_uint16(void * v, const char * name, uint16_t * obj)
{
    if (true) {
        _nocheck__trace_visit_type_uint16(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_UINT32_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_UINT32) || \
    false)

static inline void _nocheck__trace_visit_type_uint32(void * v, const char * name, uint32_t * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_UINT32)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_type_uint32 " "v=%p name=%s obj=%p" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v, name, obj);
    }
}

static inline void trace_visit_type_uint32(void * v, const char * name, uint32_t * obj)
{
    if (true) {
        _nocheck__trace_visit_type_uint32(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_UINT64_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_UINT64) || \
    false)

static inline void _nocheck__trace_visit_type_uint64(void * v, const char * name, uint64_t * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_UINT64)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_type_uint64 " "v=%p name=%s obj=%p" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v, name, obj);
    }
}

static inline void trace_visit_type_uint64(void * v, const char * name, uint64_t * obj)
{
    if (true) {
        _nocheck__trace_visit_type_uint64(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_INT8_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_INT8) || \
    false)

static inline void _nocheck__trace_visit_type_int8(void * v, const char * name, int8_t * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_INT8)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_type_int8 " "v=%p name=%s obj=%p" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v, name, obj);
    }
}

static inline void trace_visit_type_int8(void * v, const char * name, int8_t * obj)
{
    if (true) {
        _nocheck__trace_visit_type_int8(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_INT16_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_INT16) || \
    false)

static inline void _nocheck__trace_visit_type_int16(void * v, const char * name, int16_t * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_INT16)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_type_int16 " "v=%p name=%s obj=%p" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v, name, obj);
    }
}

static inline void trace_visit_type_int16(void * v, const char * name, int16_t * obj)
{
    if (true) {
        _nocheck__trace_visit_type_int16(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_INT32_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_INT32) || \
    false)

static inline void _nocheck__trace_visit_type_int32(void * v, const char * name, int32_t * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_INT32)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_type_int32 " "v=%p name=%s obj=%p" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v, name, obj);
    }
}

static inline void trace_visit_type_int32(void * v, const char * name, int32_t * obj)
{
    if (true) {
        _nocheck__trace_visit_type_int32(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_INT64_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_INT64) || \
    false)

static inline void _nocheck__trace_visit_type_int64(void * v, const char * name, int64_t * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_INT64)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_type_int64 " "v=%p name=%s obj=%p" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v, name, obj);
    }
}

static inline void trace_visit_type_int64(void * v, const char * name, int64_t * obj)
{
    if (true) {
        _nocheck__trace_visit_type_int64(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_SIZE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_SIZE) || \
    false)

static inline void _nocheck__trace_visit_type_size(void * v, const char * name, uint64_t * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_SIZE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_type_size " "v=%p name=%s obj=%p" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v, name, obj);
    }
}

static inline void trace_visit_type_size(void * v, const char * name, uint64_t * obj)
{
    if (true) {
        _nocheck__trace_visit_type_size(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_BOOL_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_BOOL) || \
    false)

static inline void _nocheck__trace_visit_type_bool(void * v, const char * name, bool * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_BOOL)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_type_bool " "v=%p name=%s obj=%p" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v, name, obj);
    }
}

static inline void trace_visit_type_bool(void * v, const char * name, bool * obj)
{
    if (true) {
        _nocheck__trace_visit_type_bool(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_STR_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_STR) || \
    false)

static inline void _nocheck__trace_visit_type_str(void * v, const char * name, char ** obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_STR)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_type_str " "v=%p name=%s obj=%p" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v, name, obj);
    }
}

static inline void trace_visit_type_str(void * v, const char * name, char ** obj)
{
    if (true) {
        _nocheck__trace_visit_type_str(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_NUMBER_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_NUMBER) || \
    false)

static inline void _nocheck__trace_visit_type_number(void * v, const char * name, double * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_NUMBER)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_type_number " "v=%p name=%s obj=%p" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v, name, obj);
    }
}

static inline void trace_visit_type_number(void * v, const char * name, double * obj)
{
    if (true) {
        _nocheck__trace_visit_type_number(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_ANY_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_ANY) || \
    false)

static inline void _nocheck__trace_visit_type_any(void * v, const char * name, void * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_ANY)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_type_any " "v=%p name=%s obj=%p" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v, name, obj);
    }
}

static inline void trace_visit_type_any(void * v, const char * name, void * obj)
{
    if (true) {
        _nocheck__trace_visit_type_any(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_NULL_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_NULL) || \
    false)

static inline void _nocheck__trace_visit_type_null(void * v, const char * name, void * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_NULL)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log_mask(LOG_TRACE,
                      "%d@%zd.%06zd:visit_type_null " "v=%p name=%s obj=%p" "\n",
                      getpid(),
                      (size_t)_now.tv_sec, (size_t)_now.tv_usec
                      , v, name, obj);
    }
}

static inline void trace_visit_type_null(void * v, const char * name, void * obj)
{
    if (true) {
        _nocheck__trace_visit_type_null(v, name, obj);
    }
}
#endif /* TRACE_QAPI_GENERATED_TRACERS_H */
