#line 1 "numpy/core/src/_simd/_simd_inc.h.src"

/*
 *****************************************************************************
 **       This file was autogenerated from a template  DO NOT EDIT!!!!      **
 **       Changes should be made to the original source (.src) file         **
 *****************************************************************************
 */

#line 1
#ifndef _SIMD_SIMD_INC_H_
#define _SIMD_SIMD_INC_H_

#include <Python.h>
#include "simd/simd.h"

#if NPY_SIMD
/************************************
 ** Types
 ************************************/
/**
 * Gather all data types supported by the module.
*/
typedef union
{
    // scalars
    #line 20
    npyv_lanetype_u8 u8;
    
#line 20
    npyv_lanetype_u16 u16;
    
#line 20
    npyv_lanetype_u32 u32;
    
#line 20
    npyv_lanetype_u64 u64;
    
#line 20
    npyv_lanetype_s8 s8;
    
#line 20
    npyv_lanetype_s16 s16;
    
#line 20
    npyv_lanetype_s32 s32;
    
#line 20
    npyv_lanetype_s64 s64;
    
#line 20
    npyv_lanetype_f32 f32;
    
#line 20
    npyv_lanetype_f64 f64;
    
    // sequence
    #line 26
    npyv_lanetype_u8 *qu8;
    
#line 26
    npyv_lanetype_u16 *qu16;
    
#line 26
    npyv_lanetype_u32 *qu32;
    
#line 26
    npyv_lanetype_u64 *qu64;
    
#line 26
    npyv_lanetype_s8 *qs8;
    
#line 26
    npyv_lanetype_s16 *qs16;
    
#line 26
    npyv_lanetype_s32 *qs32;
    
#line 26
    npyv_lanetype_s64 *qs64;
    
#line 26
    npyv_lanetype_f32 *qf32;
    
#line 26
    npyv_lanetype_f64 *qf64;
    
    // vectors
    #line 32
    npyv_u8 vu8;
    
#line 32
    npyv_u16 vu16;
    
#line 32
    npyv_u32 vu32;
    
#line 32
    npyv_u64 vu64;
    
#line 32
    npyv_s8 vs8;
    
#line 32
    npyv_s16 vs16;
    
#line 32
    npyv_s32 vs32;
    
#line 32
    npyv_s64 vs64;
    
#line 32
    npyv_b8 vb8;
    
#line 32
    npyv_b16 vb16;
    
#line 32
    npyv_b32 vb32;
    
#line 32
    npyv_b64 vb64;
    
    // multi-vectors x2
    #line 38
    npyv_u8x2 vu8x2;
    
#line 38
    npyv_u16x2 vu16x2;
    
#line 38
    npyv_u32x2 vu32x2;
    
#line 38
    npyv_u64x2 vu64x2;
    
#line 38
    npyv_s8x2 vs8x2;
    
#line 38
    npyv_s16x2 vs16x2;
    
#line 38
    npyv_s32x2 vs32x2;
    
#line 38
    npyv_s64x2 vs64x2;
    
    // multi-vectors x3
    #line 44
    npyv_u8x3 vu8x3;
    
#line 44
    npyv_u16x3 vu16x3;
    
#line 44
    npyv_u32x3 vu32x3;
    
#line 44
    npyv_u64x3 vu64x3;
    
#line 44
    npyv_s8x3 vs8x3;
    
#line 44
    npyv_s16x3 vs16x3;
    
#line 44
    npyv_s32x3 vs32x3;
    
#line 44
    npyv_s64x3 vs64x3;
    
#if NPY_SIMD_F32
    npyv_f32    vf32;
    npyv_f32x2  vf32x2;
    npyv_f32x3  vf32x3;
#endif
#if NPY_SIMD_F64
    npyv_f64    vf64;
    npyv_f64x2  vf64x2;
    npyv_f64x3  vf64x3;
#endif
} simd_data;

/**
 * Data types IDs and suffixes. Must be same data types as the ones
 * in union 'simd_data' to fit the macros in '_simd_inc_easyintrin.h'.
*/
typedef enum
{
    simd_data_none = 0,
    // scalars
    #line 69
    simd_data_u8,
    
#line 69
    simd_data_u16,
    
#line 69
    simd_data_u32,
    
#line 69
    simd_data_u64,
    
#line 69
    simd_data_s8,
    
#line 69
    simd_data_s16,
    
#line 69
    simd_data_s32,
    
#line 69
    simd_data_s64,
    
#line 69
    simd_data_f32,
    
#line 69
    simd_data_f64,
    
    // sequences
    #line 75
    simd_data_qu8,
    
#line 75
    simd_data_qu16,
    
#line 75
    simd_data_qu32,
    
#line 75
    simd_data_qu64,
    
#line 75
    simd_data_qs8,
    
#line 75
    simd_data_qs16,
    
#line 75
    simd_data_qs32,
    
#line 75
    simd_data_qs64,
    
#line 75
    simd_data_qf32,
    
#line 75
    simd_data_qf64,
    
    // vectors
    #line 81
    simd_data_vu8,
    
#line 81
    simd_data_vu16,
    
#line 81
    simd_data_vu32,
    
#line 81
    simd_data_vu64,
    
#line 81
    simd_data_vs8,
    
#line 81
    simd_data_vs16,
    
#line 81
    simd_data_vs32,
    
#line 81
    simd_data_vs64,
    
#line 81
    simd_data_vf32,
    
#line 81
    simd_data_vf64,
    
#line 81
    simd_data_vb8,
    
#line 81
    simd_data_vb16,
    
#line 81
    simd_data_vb32,
    
#line 81
    simd_data_vb64,
    
    // multi-vectors x2
    #line 87
    simd_data_vu8x2,
    
#line 87
    simd_data_vu16x2,
    
#line 87
    simd_data_vu32x2,
    
#line 87
    simd_data_vu64x2,
    
#line 87
    simd_data_vs8x2,
    
#line 87
    simd_data_vs16x2,
    
#line 87
    simd_data_vs32x2,
    
#line 87
    simd_data_vs64x2,
    
#line 87
    simd_data_vf32x2,
    
#line 87
    simd_data_vf64x2,
    
    // multi-vectors x3
    #line 93
    simd_data_vu8x3,
    
#line 93
    simd_data_vu16x3,
    
#line 93
    simd_data_vu32x3,
    
#line 93
    simd_data_vu64x3,
    
#line 93
    simd_data_vs8x3,
    
#line 93
    simd_data_vs16x3,
    
#line 93
    simd_data_vs32x3,
    
#line 93
    simd_data_vs64x3,
    
#line 93
    simd_data_vf32x3,
    
#line 93
    simd_data_vf64x3,
    
    simd_data_end,
} simd_data_type;
/************************************
 ** Declarations (inc_data)
 ************************************/
/**
 * simd_data_type information
 */
typedef struct
{
    // type name compatible with python style
    const char *pyname;
    // returns '1' if the type represent a unsigned integer
    int is_unsigned:1;
    // returns '1' if the type represent a signed integer
    int is_signed:1;
    // returns '1' if the type represent a single or double precision
    int is_float:1;
    // returns '1' if the type represent a boolean
    int is_bool:1;
    // returns '1' if the type represent a sequence
    int is_sequence:1;
    // returns '1' if the type represent a scalar
    int is_scalar:1;
    // returns '1' if the type represent a vector
    int is_vector:1;
    // returns the len of multi-vector if the type represent x2 or x3 vector
    // otherwise returns 0, e.g. returns 2 if data type is simd_data_vu8x2
    int is_vectorx;
    // returns the equivalent scalar data type e.g. simd_data_vu8 -> simd_data_u8
    simd_data_type to_scalar;
    // returns the equivalent scalar data type e.g. simd_data_s8 -> simd_data_vs8
    // NOTE: returns the will equivalent "unsigned" vector type in case of "boolean" vector
    // e.g. simd_data_vb8 -> simd_data_vu8
    simd_data_type to_vector;
    // number of vector lanes
    int nlanes;
    // sizeof lane type
    int lane_size;
} simd_data_info;

/**
 * Returns data info of certain dtype.
 *
 * Example:
 **  const simd_data_info *info = simd_data_getinfo(simd_data_vu8);
 **  if (info->is_vector && info->is_unsigned) {
 **     ...
 **  }
 */
static const simd_data_info *
simd_data_getinfo(simd_data_type dtype);

/************************************
 ** Declarations (inc_vector)
 ************************************/
typedef struct
{
    PyObject_HEAD
    // vector type id
    simd_data_type dtype;
    // vector data, aligned for safe casting
    npyv_lanetype_u8 NPY_DECL_ALIGNED(NPY_SIMD_WIDTH) data[NPY_SIMD_WIDTH];
} PySIMDVectorObject;
/**
 * Create a Python obj(PySIMDVectorObject) from a NPYV vector based on the contents
 * of `data`(simd_data) and according to the vector data type `dtype`
 * on range(simd_data_[vu8:vf64]).
 * Return NULL and a Python exception on failure, otherwise new reference.
 *
 * Example:
 ** simd_data data = {.vu8 = npyv_setall_u8(0xff)};
 ** PySIMDVectorObject *obj = PySIMDVector_FromData(data, simd_data_vu8);
 ** if (obj != NULL) {
 **    printf("I have a valid vector obj and first element is \n", obj->data[0]);
 **    Py_DECREF(obj);
 ** }
 */
static PySIMDVectorObject *
PySIMDVector_FromData(simd_data data, simd_data_type dtype);
/**
 * Return a NPYV vector(simd_data) representation of `obj`(PySIMDVectorObject) and
 * according to the vector data type `dtype` on range (simd_data_[vu8:vf64]).
 * Raise a Python exception on failure.
 *
 * Example:
 ** simd_data data = PySIMDVector_AsData(vec_obj, simd_data_vf32);
 ** if (!PyErr_Occurred()) {
 **    npyv_f32 add_1 = npyv_add_f32(data.vf32, npyv_setall_f32(1));
 **    ...
 ** }
 */
static simd_data
PySIMDVector_AsData(PySIMDVectorObject *obj, simd_data_type dtype);
/**
 * initialize and register PySIMDVectorType to certain PyModule,
 * PySIMDVectorType can be reached through attribute 'vector_type'.
 * return -1 on error, 0 on success.
 */
static int
PySIMDVectorType_Init(PyObject *module);

/************************************
 ** Declarations (inc_convert)
 ************************************/
/**
 * Return a C scalar(simd_data) representation of `obj` and
 * according to the scalar data type `dtype` on range (simd_data_[u8:f64]).
 * Raise a Python exception on failure.
 *
 * Example:
 ** simd_data data = simd_scalar_from_number(obj, simd_data_f32);
 ** if (!PyErr_Occurred()) {
 **    printf("I have a valid float %d\n", data.f32);
 ** }
 */
static simd_data
simd_scalar_from_number(PyObject *obj, simd_data_type dtype);
/**
 * Create a Python scalar from a C scalar based on the contents
 * of `data`(simd_data) and according to the scalar data type `dtype`
 * on range(simd_data_[u8:f64]).
 * Return NULL and a Python exception on failure, otherwise new reference.
 *
 * Example:
 ** simd_data data = {.u32 = 0x7fffffff};
 ** PyObject *obj = simd_scalar_to_number(data, simd_data_s32);
 ** if (obj != NULL) {
 **    printf("I have a valid Python integer %d\n", PyLong_AsLong(obj));
 **    Py_DECREF(obj);
 ** }
 */
static PyObject *
simd_scalar_to_number(simd_data data, simd_data_type dtype);
/**
 * Allocate a C array in memory according to number of elements `len`
 * and sequence data type `dtype` on range(simd_data_[qu8:qf64]).
 *
 * Return aligned pointer based on `NPY_SIMD_WIDTH` or NULL
 * with a Python exception on failure.
 *
 * Example:
 ** npyv_lanetype_f64 *aligned_ptr = simd_sequence_new(npyv_nlanes_f64, simd_data_f64);
 ** if (aligned_ptr != NULL) {
 **    // aligned store
 **    npyv_storea_f64(aligned_ptr, npyv_setall_f64(1.0));
 **    printf("The first element of my array %f\n", aligned_ptr[0]);
 **    simd_sequence_free(aligned_ptr);
 ** }
 */
static void *
simd_sequence_new(Py_ssize_t len, simd_data_type dtype);
/**
 * Return the number of elements of the allocated C array `ptr`
 * by `simd_sequence_new()` or `simd_sequence_from_iterable()`.
 */
static Py_ssize_t
simd_sequence_len(const void *ptr);
/**
 * Free the allocated C array by `simd_sequence_new()` or
 * `simd_sequence_from_iterable()`.
 */
static void
simd_sequence_free(void *ptr);
/**
 * Return a C array representation of a PyObject sequence `obj` and
 * according to the sequence data type `dtype` on range (simd_data_[qu8:qf64]).
 *
 * Note: parameter `min_size` takes the number of minimum acceptable elements.
 *
 * Return aligned pointer based on `NPY_SIMD_WIDTH` or NULL
 * with a Python exception on failure.
 *
 * Example:
 ** npyv_lanetype_u32 *ptr = simd_sequence_from_iterable(seq_obj, simd_data_qu32, npyv_nlanes_u32);
 ** if (ptr != NULL) {
 **     npyv_u32 a = npyv_load_u32(ptr);
 **     ...
 **     simd_sequence_free(ptr);
 ** }
 **
 */
static void *
simd_sequence_from_iterable(PyObject *obj, simd_data_type dtype, Py_ssize_t min_size);
/**
 * Fill a Python sequence object `obj` with a C array `ptr` allocated by
 * `simd_sequence_new()` or `simd_sequence_from_iterable()` according to
 * to the sequence data type `dtype` on range (simd_data_[qu8:qf64]).
 *
 * Return 0 on success or -1 with a Python exception on failure.
 */
static int
simd_sequence_fill_iterable(PyObject *obj, const void *ptr, simd_data_type dtype);
/**
 * Create a Python list from a C array `ptr` allocated by
 * `simd_sequence_new()` or `simd_sequence_from_iterable()` according to
 * to the sequence data type `dtype` on range (simd_data_[qu8:qf64]).
 *
 * Return NULL and a Python exception on failure, otherwise new reference.
 */
static PyObject *
simd_sequence_to_list(const void *ptr, simd_data_type dtype);
/**
 * Return a SIMD multi-vector(simd_data) representation of Python tuple of
 * (simd_vector*,) `obj` according to the scalar data type `dtype`
 * on range (simd_data_[vu8x2:vf64x2])-(simd_data_[vu8x3:vf64x3]).
 *
 * Raise a Python exception on failure.
 *
 * Example:
 ** simd_data data = simd_vectorx_from_tuple(tuple_obj, simd_data_vf32x2);
 ** if (!PyErr_Occurred()) {
 **     npyv_f32 sum = npyv_add_f32(data.vf32x2.val[0], data.vf32x2.val[1]);
 **     ...
 ** }
 **
 */
static simd_data
simd_vectorx_from_tuple(PyObject *obj, simd_data_type dtype);
/**
 * Create a Python tuple of 'simd_vector' from a SIMD multi-vector
 * based on the contents of `data`(simd_data) and according to
 * the multi-vector data type `dtype` on range
 * (simd_data_[vu8x2:vf64x2])-(simd_data_[vu8x3:vf64x3]).
 *
 * Return NULL and a Python exception on failure, otherwise new reference.
 */
static PyObject *
simd_vectorx_to_tuple(simd_data data, simd_data_type dtype);

/************************************
 ** Declarations (inc_arg)
 ************************************/
typedef struct
{
    simd_data_type dtype;
    simd_data data;
    // set by simd_arg_converter()
    PyObject *obj;
} simd_arg;
/**
 * The following functions gather all conversions between all data types
 * and they can used instead of all above functions.
 */
/**
 * Convert a Python object `obj` into simd_data `arg->data` according to the
 * required data type `arg->dtype`.
 *
 * Return -1 and raise Python exception on failure, otherwise return 0.
 *
 * Notes:
 *  - requires `simd_arg_free()` or `simd_sequence_free()`
 *    to free allocated C array, in case of sequence data types.
 *  - the number of minimum acceptable elements for sequence data
 *    types is the number of lanes of the equivalent vector data type.
 *
 * Example #1:
 ** simd_arg arg = {.dtype = simd_data_qu8};
 ** if (simd_arg_from_obj(seq_obj, &arg) < 0) {
 **     // fails to convert a python sequence object to C array of uint8
 **     return;
 ** }
 ** npyv_u8 v_u8 = npyv_load_u8(arg->data.qu8);
 ** ...
 ** simd_arg_free(&arg);
 *
 * Example #2:
 ** simd_arg arg = {.dtype = simd_data_vf32};
 ** if (simd_arg_from_obj(vector_obj, &arg) < 0) {
 **     // fails to convert a python simd_vector to NPYV vector
 **     return;
 ** }
 ** npyv_f32 add_one = npyv_add_f32(arg->data.vu8, npyv_setall_f32(1));
 ** ...
 */
static int
simd_arg_from_obj(PyObject *obj, simd_arg *arg);
/**
 * Convert a simd_data `arg->data` to into a Python object according to the
 * required data type `arg->dtype`.
 *
 * Return NULL and raise Python exception on failure, otherwise return
 * new reference.
 *
 * Example:
 ** simd_arg arg = {.dtype = simd_data_u32, .data = {.u32 = 0xffffffff}};
 ** PyObject *obj = simd_arg_to_obj(&arg);
 ** if (obj == NULL) {
 **    // fails convert C uint32 to Python integer.
 **    return;
 ** }
 **
 */
static PyObject *
simd_arg_to_obj(const simd_arg *arg);
/**
 * Converter function used similar to simd_arg_from_obj() but
 * used with PyArg_Parse*().
 *
 * Notes:
 *  - requires `simd_arg_free()` or `simd_sequence_free()`
 *    to free allocated C array, in case of sequence data types.
 *  - the number of minimum acceptable elements for sequence data
 *    types is the number of lanes of the equivalent vector data type.
 *  - use 'arg->obj' to retrieve the parameter obj.
 *
 * Example:
 **  simd_arg seq_f32 = {.dtype = simd_data_qf32};
 **  simd_arg vec_f32 = {.dtype = simd_data_vf32};
 **  if (!PyArg_ParseTuple(
 **     args, "O&O&:add_sum_f32",
 **     simd_arg_converter, &seq_f32,
 **     simd_arg_converter, &vec_f32
 **  )) {
 **     // fail
 **     return;
 **  }
 **  npyv_f32 load_a = npyv_load_f32(seq_f32.data.qf32);
 **  npyv_f32 sum = npyv_add_f32(load_a, vec_f32.data.vf32);
 **  ...
 **  simd_arg_free(&seq_f32);
 */
static int
simd_arg_converter(PyObject *obj, simd_arg *arg);
/**
 * Free the allocated C array, if the arg hold sequence data type.
 */
static void
simd_arg_free(simd_arg *arg);

#endif // NPY_SIMD
#endif // _SIMD_SIMD_INC_H_

