/* soapStub.h
   Generated by gSOAP 2.8.9 from test.h

Copyright(C) 2000-2012, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
1) GPL or 2) Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef soapStub_H
#define soapStub_H
#include <vector>
#define SOAP_NAMESPACE_OF_ns1	"http://tempuri.org/Imports"
#define SOAP_NAMESPACE_OF_tempuri	"http://tempuri.org/"
#define SOAP_NAMESPACE_OF_ns1	"http://tempuri.org/Imports"
#define SOAP_NAMESPACE_OF_ns2	"http://schemas.microsoft.com/2003/10/Serialization/Arrays"
#include "stdsoap2.h"
#if GSOAP_VERSION != 20809
# error "GSOAP VERSION MISMATCH IN GENERATED CODE: PLEASE REINSTALL PACKAGE"
#endif


/******************************************************************************\
 *                                                                            *
 * Enumerations                                                               *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes and Structs                                                        *
 *                                                                            *
\******************************************************************************/


#if 0 /* volatile type: do not declare here, declared elsewhere */

#endif

#ifndef SOAP_TYPE_xsd__anyType
#define SOAP_TYPE_xsd__anyType (8)
/* Primitive xsd:anyType schema type: */
class SOAP_CMAC xsd__anyType
{
public:
	char *__item;
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 8; } /* = unique id SOAP_TYPE_xsd__anyType */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__anyType() { xsd__anyType::soap_default(NULL); }
	virtual ~xsd__anyType() { }
};
#endif

#ifndef SOAP_TYPE_xsd__boolean
#define SOAP_TYPE_xsd__boolean (10)
/* Primitive xsd:boolean schema type: */
class SOAP_CMAC xsd__boolean : public xsd__anyType
{
public:
	bool __item;
public:
	virtual int soap_type() const { return 10; } /* = unique id SOAP_TYPE_xsd__boolean */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__boolean() { xsd__boolean::soap_default(NULL); }
	virtual ~xsd__boolean() { }
};
#endif

#if 0 /* volatile type: do not declare here, declared elsewhere */

#endif

#ifndef SOAP_TYPE_xsd__string
#define SOAP_TYPE_xsd__string (12)
/* Primitive xsd:string schema type: */
class SOAP_CMAC xsd__string : public xsd__anyType
{
public:
	std::string __item;
public:
	virtual int soap_type() const { return 12; } /* = unique id SOAP_TYPE_xsd__string */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__string() { xsd__string::soap_default(NULL); }
	virtual ~xsd__string() { }
};
#endif

#ifndef SOAP_TYPE__tempuri__Getstring
#define SOAP_TYPE__tempuri__Getstring (15)
/* tempuri:Getstring */
class SOAP_CMAC _tempuri__Getstring
{
public:
	std::string *InStr;	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 15; } /* = unique id SOAP_TYPE__tempuri__Getstring */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _tempuri__Getstring() { _tempuri__Getstring::soap_default(NULL); }
	virtual ~_tempuri__Getstring() { }
};
#endif

#ifndef SOAP_TYPE__tempuri__GetstringResponse
#define SOAP_TYPE__tempuri__GetstringResponse (16)
/* tempuri:GetstringResponse */
class SOAP_CMAC _tempuri__GetstringResponse
{
public:
	std::string *GetstringResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 16; } /* = unique id SOAP_TYPE__tempuri__GetstringResponse */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _tempuri__GetstringResponse() { _tempuri__GetstringResponse::soap_default(NULL); }
	virtual ~_tempuri__GetstringResponse() { }
};
#endif

#ifndef SOAP_TYPE__tempuri__ExecuteNonQuery
#define SOAP_TYPE__tempuri__ExecuteNonQuery (17)
/* tempuri:ExecuteNonQuery */
class SOAP_CMAC _tempuri__ExecuteNonQuery
{
public:
	std::string *SqlTxt;	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 17; } /* = unique id SOAP_TYPE__tempuri__ExecuteNonQuery */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _tempuri__ExecuteNonQuery() { _tempuri__ExecuteNonQuery::soap_default(NULL); }
	virtual ~_tempuri__ExecuteNonQuery() { }
};
#endif

#ifndef SOAP_TYPE__tempuri__ExecuteNonQueryResponse
#define SOAP_TYPE__tempuri__ExecuteNonQueryResponse (18)
/* tempuri:ExecuteNonQueryResponse */
class SOAP_CMAC _tempuri__ExecuteNonQueryResponse
{
public:
	bool *ExecuteNonQueryResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:boolean */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 18; } /* = unique id SOAP_TYPE__tempuri__ExecuteNonQueryResponse */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _tempuri__ExecuteNonQueryResponse() { _tempuri__ExecuteNonQueryResponse::soap_default(NULL); }
	virtual ~_tempuri__ExecuteNonQueryResponse() { }
};
#endif

#ifndef SOAP_TYPE__tempuri__ExecuteScalar_USCOREBool
#define SOAP_TYPE__tempuri__ExecuteScalar_USCOREBool (19)
/* tempuri:ExecuteScalar_Bool */
class SOAP_CMAC _tempuri__ExecuteScalar_USCOREBool
{
public:
	std::string *SqlTxt;	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 19; } /* = unique id SOAP_TYPE__tempuri__ExecuteScalar_USCOREBool */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _tempuri__ExecuteScalar_USCOREBool() { _tempuri__ExecuteScalar_USCOREBool::soap_default(NULL); }
	virtual ~_tempuri__ExecuteScalar_USCOREBool() { }
};
#endif

#ifndef SOAP_TYPE__tempuri__ExecuteScalar_USCOREBoolResponse
#define SOAP_TYPE__tempuri__ExecuteScalar_USCOREBoolResponse (20)
/* tempuri:ExecuteScalar_BoolResponse */
class SOAP_CMAC _tempuri__ExecuteScalar_USCOREBoolResponse
{
public:
	bool *ExecuteScalar_USCOREBoolResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:boolean */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 20; } /* = unique id SOAP_TYPE__tempuri__ExecuteScalar_USCOREBoolResponse */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _tempuri__ExecuteScalar_USCOREBoolResponse() { _tempuri__ExecuteScalar_USCOREBoolResponse::soap_default(NULL); }
	virtual ~_tempuri__ExecuteScalar_USCOREBoolResponse() { }
};
#endif

#ifndef SOAP_TYPE__tempuri__ExecuteScalar_USCOREString
#define SOAP_TYPE__tempuri__ExecuteScalar_USCOREString (21)
/* tempuri:ExecuteScalar_String */
class SOAP_CMAC _tempuri__ExecuteScalar_USCOREString
{
public:
	std::string *SqlTxt;	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 21; } /* = unique id SOAP_TYPE__tempuri__ExecuteScalar_USCOREString */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _tempuri__ExecuteScalar_USCOREString() { _tempuri__ExecuteScalar_USCOREString::soap_default(NULL); }
	virtual ~_tempuri__ExecuteScalar_USCOREString() { }
};
#endif

#ifndef SOAP_TYPE__tempuri__ExecuteScalar_USCOREStringResponse
#define SOAP_TYPE__tempuri__ExecuteScalar_USCOREStringResponse (22)
/* tempuri:ExecuteScalar_StringResponse */
class SOAP_CMAC _tempuri__ExecuteScalar_USCOREStringResponse
{
public:
	std::string *ExecuteScalar_USCOREStringResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 22; } /* = unique id SOAP_TYPE__tempuri__ExecuteScalar_USCOREStringResponse */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _tempuri__ExecuteScalar_USCOREStringResponse() { _tempuri__ExecuteScalar_USCOREStringResponse::soap_default(NULL); }
	virtual ~_tempuri__ExecuteScalar_USCOREStringResponse() { }
};
#endif

#ifndef SOAP_TYPE__tempuri__ExecuteScalar_USCOREObject
#define SOAP_TYPE__tempuri__ExecuteScalar_USCOREObject (23)
/* tempuri:ExecuteScalar_Object */
class SOAP_CMAC _tempuri__ExecuteScalar_USCOREObject
{
public:
	std::string *SqlTxt;	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 23; } /* = unique id SOAP_TYPE__tempuri__ExecuteScalar_USCOREObject */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _tempuri__ExecuteScalar_USCOREObject() { _tempuri__ExecuteScalar_USCOREObject::soap_default(NULL); }
	virtual ~_tempuri__ExecuteScalar_USCOREObject() { }
};
#endif

#ifndef SOAP_TYPE__tempuri__ExecuteScalar_USCOREObjectResponse
#define SOAP_TYPE__tempuri__ExecuteScalar_USCOREObjectResponse (24)
/* tempuri:ExecuteScalar_ObjectResponse */
class SOAP_CMAC _tempuri__ExecuteScalar_USCOREObjectResponse
{
public:
	xsd__anyType *ExecuteScalar_USCOREObjectResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:anyType */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 24; } /* = unique id SOAP_TYPE__tempuri__ExecuteScalar_USCOREObjectResponse */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _tempuri__ExecuteScalar_USCOREObjectResponse() { _tempuri__ExecuteScalar_USCOREObjectResponse::soap_default(NULL); }
	virtual ~_tempuri__ExecuteScalar_USCOREObjectResponse() { }
};
#endif

#ifndef SOAP_TYPE__tempuri__DataAdapter
#define SOAP_TYPE__tempuri__DataAdapter (25)
/* tempuri:DataAdapter */
class SOAP_CMAC _tempuri__DataAdapter
{
public:
	std::string *SqlTxt;	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 25; } /* = unique id SOAP_TYPE__tempuri__DataAdapter */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _tempuri__DataAdapter() { _tempuri__DataAdapter::soap_default(NULL); }
	virtual ~_tempuri__DataAdapter() { }
};
#endif

#ifndef SOAP_TYPE__tempuri__DataAdapterResponse_DataAdapterResult
#define SOAP_TYPE__tempuri__DataAdapterResponse_DataAdapterResult (34)
/* tempuri:DataAdapterResponse-DataAdapterResult */
class SOAP_CMAC _tempuri__DataAdapterResponse_DataAdapterResult
{
public:
	char *xsd__schema;	/* required element of type xsd:schema */
	char *__any;
public:
	virtual int soap_type() const { return 34; } /* = unique id SOAP_TYPE__tempuri__DataAdapterResponse_DataAdapterResult */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _tempuri__DataAdapterResponse_DataAdapterResult() { _tempuri__DataAdapterResponse_DataAdapterResult::soap_default(NULL); }
	virtual ~_tempuri__DataAdapterResponse_DataAdapterResult() { }
};
#endif

#ifndef SOAP_TYPE__tempuri__DataAdapterResponse
#define SOAP_TYPE__tempuri__DataAdapterResponse (26)
/* tempuri:DataAdapterResponse */
class SOAP_CMAC _tempuri__DataAdapterResponse
{
public:
	_tempuri__DataAdapterResponse_DataAdapterResult *DataAdapterResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type tempuri:DataAdapterResponse-DataAdapterResult */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 26; } /* = unique id SOAP_TYPE__tempuri__DataAdapterResponse */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _tempuri__DataAdapterResponse() { _tempuri__DataAdapterResponse::soap_default(NULL); }
	virtual ~_tempuri__DataAdapterResponse() { }
};
#endif

#ifndef SOAP_TYPE__tempuri__ExecuteSqlTransaction_USCOREBool
#define SOAP_TYPE__tempuri__ExecuteSqlTransaction_USCOREBool (27)
/* tempuri:ExecuteSqlTransaction_Bool */
class SOAP_CMAC _tempuri__ExecuteSqlTransaction_USCOREBool
{
public:
	std::string *transactionName;	/* optional element of type xsd:string */
	class ns2__ArrayOfstring *cmdTextArray;	/* optional element of type ns2:ArrayOfstring */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 27; } /* = unique id SOAP_TYPE__tempuri__ExecuteSqlTransaction_USCOREBool */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _tempuri__ExecuteSqlTransaction_USCOREBool() { _tempuri__ExecuteSqlTransaction_USCOREBool::soap_default(NULL); }
	virtual ~_tempuri__ExecuteSqlTransaction_USCOREBool() { }
};
#endif

#ifndef SOAP_TYPE__tempuri__ExecuteSqlTransaction_USCOREBoolResponse
#define SOAP_TYPE__tempuri__ExecuteSqlTransaction_USCOREBoolResponse (28)
/* tempuri:ExecuteSqlTransaction_BoolResponse */
class SOAP_CMAC _tempuri__ExecuteSqlTransaction_USCOREBoolResponse
{
public:
	bool *ExecuteSqlTransaction_USCOREBoolResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:boolean */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 28; } /* = unique id SOAP_TYPE__tempuri__ExecuteSqlTransaction_USCOREBoolResponse */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _tempuri__ExecuteSqlTransaction_USCOREBoolResponse() { _tempuri__ExecuteSqlTransaction_USCOREBoolResponse::soap_default(NULL); }
	virtual ~_tempuri__ExecuteSqlTransaction_USCOREBoolResponse() { }
};
#endif

#ifndef SOAP_TYPE__ns1__DataSet
#define SOAP_TYPE__ns1__DataSet (29)
/* ns1:DataSet */
class SOAP_CMAC _ns1__DataSet
{
public:
	char *xsd__schema;	/* required element of type xsd:schema */
	char *__any;
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 29; } /* = unique id SOAP_TYPE__ns1__DataSet */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__DataSet() { _ns1__DataSet::soap_default(NULL); }
	virtual ~_ns1__DataSet() { }
};
#endif

#ifndef SOAP_TYPE_ns2__ArrayOfstring
#define SOAP_TYPE_ns2__ArrayOfstring (30)
/* ns2:ArrayOfstring */
class SOAP_CMAC ns2__ArrayOfstring : public xsd__anyType
{
public:
	std::vector<std::string >string;	/* optional element of type xsd:string */
public:
	virtual int soap_type() const { return 30; } /* = unique id SOAP_TYPE_ns2__ArrayOfstring */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns2__ArrayOfstring() { ns2__ArrayOfstring::soap_default(NULL); }
	virtual ~ns2__ArrayOfstring() { }
};
#endif

#ifndef SOAP_TYPE___tempuri__Getstring
#define SOAP_TYPE___tempuri__Getstring (41)
/* Operation wrapper: */
struct __tempuri__Getstring
{
public:
	_tempuri__Getstring *tempuri__Getstring;	/* optional element of type tempuri:Getstring */
};
#endif

#ifndef SOAP_TYPE___tempuri__ExecuteNonQuery
#define SOAP_TYPE___tempuri__ExecuteNonQuery (45)
/* Operation wrapper: */
struct __tempuri__ExecuteNonQuery
{
public:
	_tempuri__ExecuteNonQuery *tempuri__ExecuteNonQuery;	/* optional element of type tempuri:ExecuteNonQuery */
};
#endif

#ifndef SOAP_TYPE___tempuri__ExecuteScalar_USCOREBool
#define SOAP_TYPE___tempuri__ExecuteScalar_USCOREBool (49)
/* Operation wrapper: */
struct __tempuri__ExecuteScalar_USCOREBool
{
public:
	_tempuri__ExecuteScalar_USCOREBool *tempuri__ExecuteScalar_USCOREBool;	/* optional element of type tempuri:ExecuteScalar_Bool */
};
#endif

#ifndef SOAP_TYPE___tempuri__ExecuteScalar_USCOREString
#define SOAP_TYPE___tempuri__ExecuteScalar_USCOREString (53)
/* Operation wrapper: */
struct __tempuri__ExecuteScalar_USCOREString
{
public:
	_tempuri__ExecuteScalar_USCOREString *tempuri__ExecuteScalar_USCOREString;	/* optional element of type tempuri:ExecuteScalar_String */
};
#endif

#ifndef SOAP_TYPE___tempuri__ExecuteScalar_USCOREObject
#define SOAP_TYPE___tempuri__ExecuteScalar_USCOREObject (57)
/* Operation wrapper: */
struct __tempuri__ExecuteScalar_USCOREObject
{
public:
	_tempuri__ExecuteScalar_USCOREObject *tempuri__ExecuteScalar_USCOREObject;	/* optional element of type tempuri:ExecuteScalar_Object */
};
#endif

#ifndef SOAP_TYPE___tempuri__DataAdapter
#define SOAP_TYPE___tempuri__DataAdapter (61)
/* Operation wrapper: */
struct __tempuri__DataAdapter
{
public:
	_tempuri__DataAdapter *tempuri__DataAdapter;	/* optional element of type tempuri:DataAdapter */
};
#endif

#ifndef SOAP_TYPE___tempuri__ExecuteSqlTransaction_USCOREBool
#define SOAP_TYPE___tempuri__ExecuteSqlTransaction_USCOREBool (65)
/* Operation wrapper: */
struct __tempuri__ExecuteSqlTransaction_USCOREBool
{
public:
	_tempuri__ExecuteSqlTransaction_USCOREBool *tempuri__ExecuteSqlTransaction_USCOREBool;	/* optional element of type tempuri:ExecuteSqlTransaction_Bool */
};
#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (66)
/* SOAP Header: */
struct SOAP_ENV__Header
{
#ifdef WITH_NOEMPTYSTRUCT
private:
	char dummy;	/* dummy member to enable compilation */
#endif
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (67)
/* SOAP Fault Code: */
struct SOAP_ENV__Code
{
public:
	char *SOAP_ENV__Value;	/* optional element of type xsd:QName */
	struct SOAP_ENV__Code *SOAP_ENV__Subcode;	/* optional element of type SOAP-ENV:Code */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (69)
/* SOAP-ENV:Detail */
struct SOAP_ENV__Detail
{
public:
	char *__any;
	int __type;	/* any type of element <fault> (defined below) */
	void *fault;	/* transient */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (72)
/* SOAP-ENV:Reason */
struct SOAP_ENV__Reason
{
public:
	char *SOAP_ENV__Text;	/* optional element of type xsd:string */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (73)
/* SOAP Fault: */
struct SOAP_ENV__Fault
{
public:
	char *faultcode;	/* optional element of type xsd:QName */
	char *faultstring;	/* optional element of type xsd:string */
	char *faultactor;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *detail;	/* optional element of type SOAP-ENV:Detail */
	struct SOAP_ENV__Code *SOAP_ENV__Code;	/* optional element of type SOAP-ENV:Code */
	struct SOAP_ENV__Reason *SOAP_ENV__Reason;	/* optional element of type SOAP-ENV:Reason */
	char *SOAP_ENV__Node;	/* optional element of type xsd:string */
	char *SOAP_ENV__Role;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *SOAP_ENV__Detail;	/* optional element of type SOAP-ENV:Detail */
};
#endif

#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/

#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
typedef char *_QName;
#endif

#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (6)
typedef char *_XML;
#endif

#ifndef SOAP_TYPE__xsd__schema
#define SOAP_TYPE__xsd__schema (14)
typedef char *_xsd__schema;
#endif


/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Server-Side Operations                                                     *
 *                                                                            *
\******************************************************************************/


SOAP_FMAC5 int SOAP_FMAC6 __tempuri__Getstring(struct soap*, _tempuri__Getstring *tempuri__Getstring, _tempuri__GetstringResponse *tempuri__GetstringResponse);

SOAP_FMAC5 int SOAP_FMAC6 __tempuri__ExecuteNonQuery(struct soap*, _tempuri__ExecuteNonQuery *tempuri__ExecuteNonQuery, _tempuri__ExecuteNonQueryResponse *tempuri__ExecuteNonQueryResponse);

SOAP_FMAC5 int SOAP_FMAC6 __tempuri__ExecuteScalar_USCOREBool(struct soap*, _tempuri__ExecuteScalar_USCOREBool *tempuri__ExecuteScalar_USCOREBool, _tempuri__ExecuteScalar_USCOREBoolResponse *tempuri__ExecuteScalar_USCOREBoolResponse);

SOAP_FMAC5 int SOAP_FMAC6 __tempuri__ExecuteScalar_USCOREString(struct soap*, _tempuri__ExecuteScalar_USCOREString *tempuri__ExecuteScalar_USCOREString, _tempuri__ExecuteScalar_USCOREStringResponse *tempuri__ExecuteScalar_USCOREStringResponse);

SOAP_FMAC5 int SOAP_FMAC6 __tempuri__ExecuteScalar_USCOREObject(struct soap*, _tempuri__ExecuteScalar_USCOREObject *tempuri__ExecuteScalar_USCOREObject, _tempuri__ExecuteScalar_USCOREObjectResponse *tempuri__ExecuteScalar_USCOREObjectResponse);

SOAP_FMAC5 int SOAP_FMAC6 __tempuri__DataAdapter(struct soap*, _tempuri__DataAdapter *tempuri__DataAdapter, _tempuri__DataAdapterResponse *tempuri__DataAdapterResponse);

SOAP_FMAC5 int SOAP_FMAC6 __tempuri__ExecuteSqlTransaction_USCOREBool(struct soap*, _tempuri__ExecuteSqlTransaction_USCOREBool *tempuri__ExecuteSqlTransaction_USCOREBool, _tempuri__ExecuteSqlTransaction_USCOREBoolResponse *tempuri__ExecuteSqlTransaction_USCOREBoolResponse);

/******************************************************************************\
 *                                                                            *
 * Server-Side Skeletons to Invoke Service Operations                         *
 *                                                                            *
\******************************************************************************/

SOAP_FMAC5 int SOAP_FMAC6 soap_serve(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_request(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve___tempuri__Getstring(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve___tempuri__ExecuteNonQuery(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve___tempuri__ExecuteScalar_USCOREBool(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve___tempuri__ExecuteScalar_USCOREString(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve___tempuri__ExecuteScalar_USCOREObject(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve___tempuri__DataAdapter(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve___tempuri__ExecuteSqlTransaction_USCOREBool(struct soap*);

/******************************************************************************\
 *                                                                            *
 * Client-Side Call Stubs                                                     *
 *                                                                            *
\******************************************************************************/


SOAP_FMAC5 int SOAP_FMAC6 soap_call___tempuri__Getstring(struct soap *soap, const char *soap_endpoint, const char *soap_action, _tempuri__Getstring *tempuri__Getstring, _tempuri__GetstringResponse *tempuri__GetstringResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___tempuri__ExecuteNonQuery(struct soap *soap, const char *soap_endpoint, const char *soap_action, _tempuri__ExecuteNonQuery *tempuri__ExecuteNonQuery, _tempuri__ExecuteNonQueryResponse *tempuri__ExecuteNonQueryResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___tempuri__ExecuteScalar_USCOREBool(struct soap *soap, const char *soap_endpoint, const char *soap_action, _tempuri__ExecuteScalar_USCOREBool *tempuri__ExecuteScalar_USCOREBool, _tempuri__ExecuteScalar_USCOREBoolResponse *tempuri__ExecuteScalar_USCOREBoolResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___tempuri__ExecuteScalar_USCOREString(struct soap *soap, const char *soap_endpoint, const char *soap_action, _tempuri__ExecuteScalar_USCOREString *tempuri__ExecuteScalar_USCOREString, _tempuri__ExecuteScalar_USCOREStringResponse *tempuri__ExecuteScalar_USCOREStringResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___tempuri__ExecuteScalar_USCOREObject(struct soap *soap, const char *soap_endpoint, const char *soap_action, _tempuri__ExecuteScalar_USCOREObject *tempuri__ExecuteScalar_USCOREObject, _tempuri__ExecuteScalar_USCOREObjectResponse *tempuri__ExecuteScalar_USCOREObjectResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___tempuri__DataAdapter(struct soap *soap, const char *soap_endpoint, const char *soap_action, _tempuri__DataAdapter *tempuri__DataAdapter, _tempuri__DataAdapterResponse *tempuri__DataAdapterResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___tempuri__ExecuteSqlTransaction_USCOREBool(struct soap *soap, const char *soap_endpoint, const char *soap_action, _tempuri__ExecuteSqlTransaction_USCOREBool *tempuri__ExecuteSqlTransaction_USCOREBool, _tempuri__ExecuteSqlTransaction_USCOREBoolResponse *tempuri__ExecuteSqlTransaction_USCOREBoolResponse);

#endif

/* End of soapStub.h */