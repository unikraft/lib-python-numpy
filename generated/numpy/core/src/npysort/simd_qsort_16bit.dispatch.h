// cache_hash:1543789094
/**
 * AUTOGENERATED DON'T EDIT
 * Please make changes to the code generator (distutils/ccompiler_opt.py)
 */
#ifndef NPY__CPU_DISPATCH_EXPAND_
    #define NPY__CPU_DISPATCH_EXPAND_(X) X
#endif
#undef NPY__CPU_DISPATCH_BASELINE_CALL
#undef NPY__CPU_DISPATCH_CALL
#define NPY__CPU_DISPATCH_BASELINE_CALL(CB, ...) \

#define NPY__CPU_DISPATCH_CALL(CHK, CB, ...) \
	NPY__CPU_DISPATCH_EXPAND_(CB((CHK(AVX512_SPR)), AVX512_SPR, __VA_ARGS__)) \
	NPY__CPU_DISPATCH_EXPAND_(CB((CHK(AVX512_ICL)), AVX512_ICL, __VA_ARGS__))
