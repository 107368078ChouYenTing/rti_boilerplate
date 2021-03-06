

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Sensors.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Sensors_1082808640_h
#define Sensors_1082808640_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

extern "C" {

    extern const char *TestTYPENAME;

}

struct TestSeq;
#ifndef NDDS_STANDALONE_TYPE
class TestTypeSupport;
class TestDataWriter;
class TestDataReader;
#endif

class Test 
{
  public:
    typedef struct TestSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef TestTypeSupport TypeSupport;
    typedef TestDataWriter DataWriter;
    typedef TestDataReader DataReader;
    #endif

    DDS_Char *   id ;
    DDS_Char *   type ;
    DDS_Float   value ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* Test_get_typecode(void); /* Type code */

DDS_SEQUENCE(TestSeq, Test);                                        

NDDSUSERDllExport
RTIBool Test_initialize(
    Test* self);

NDDSUSERDllExport
RTIBool Test_initialize_ex(
    Test* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Test_initialize_w_params(
    Test* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void Test_finalize(
    Test* self);

NDDSUSERDllExport
void Test_finalize_ex(
    Test* self,RTIBool deletePointers);

NDDSUSERDllExport
void Test_finalize_w_params(
    Test* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Test_finalize_optional_members(
    Test* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Test_copy(
    Test* dst,
    const Test* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Sensors */

