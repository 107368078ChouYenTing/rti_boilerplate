

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Sensors.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "Sensors.h"

/* ========================================================================= */
const char *TestTYPENAME = "Test";

DDS_TypeCode* Test_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Test_g_tc_id_string = DDS_INITIALIZE_STRING_TYPECODE((50));
    static DDS_TypeCode Test_g_tc_type_string = DDS_INITIALIZE_STRING_TYPECODE((50));
    static DDS_TypeCode_Member Test_g_tc_members[3]=
    {

        {
            (char *)"id",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"type",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"value",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode Test_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"Test", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            Test_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for Test*/

    if (is_initialized) {
        return &Test_g_tc;
    }

    Test_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&Test_g_tc_id_string;

    Test_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&Test_g_tc_type_string;

    Test_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    is_initialized = RTI_TRUE;

    return &Test_g_tc;
}

RTIBool Test_initialize(
    Test* sample) {
    return Test_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Test_initialize_ex(
    Test* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Test_initialize_w_params(
        sample,&allocParams);

}

RTIBool Test_initialize_w_params(
    Test* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (allocParams->allocate_memory){
        sample->id= DDS_String_alloc ((50));
        if (sample->id == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->id!= NULL) { 
            sample->id[0] = '\0';
        }
    }

    if (allocParams->allocate_memory){
        sample->type= DDS_String_alloc ((50));
        if (sample->type == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->type!= NULL) { 
            sample->type[0] = '\0';
        }
    }

    if (!RTICdrType_initFloat(&sample->value)) {
        return RTI_FALSE;
    }     

    return RTI_TRUE;
}

void Test_finalize(
    Test* sample)
{

    Test_finalize_ex(sample,RTI_TRUE);
}

void Test_finalize_ex(
    Test* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Test_finalize_w_params(
        sample,&deallocParams);
}

void Test_finalize_w_params(
    Test* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    if (sample->id != NULL) {
        DDS_String_free(sample->id);
        sample->id=NULL;

    }
    if (sample->type != NULL) {
        DDS_String_free(sample->type);
        sample->type=NULL;

    }

}

void Test_finalize_optional_members(
    Test* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool Test_copy(
    Test* dst,
    const Test* src)
{

    if (!RTICdrType_copyStringEx (
        &dst->id, src->id, 
        (50) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    if (!RTICdrType_copyStringEx (
        &dst->type, src->type, 
        (50) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->value, &src->value)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Test' sequence class.
*/
#define T Test
#define TSeq TestSeq
#define T_initialize_w_params Test_initialize_w_params
#define T_finalize_w_params   Test_finalize_w_params
#define T_copy       Test_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

