/* soapClient.cpp
   Generated by gSOAP 2.8.9 from test.h

Copyright(C) 2000-2012, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
1) GPL or 2) Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#if defined(__BORLANDC__)
#pragma option push -w-8060
#pragma option push -w-8004
#endif
#include "soapH.h"

SOAP_SOURCE_STAMP("@(#) soapClient.cpp ver 2.8.9 2012-08-24 02:27:07 GMT")


SOAP_FMAC5 int SOAP_FMAC6 soap_call___tempuri__Getstring(struct soap *soap, const char *soap_endpoint, const char *soap_action, _tempuri__Getstring *tempuri__Getstring, _tempuri__GetstringResponse *tempuri__GetstringResponse)
{	struct __tempuri__Getstring soap_tmp___tempuri__Getstring;
	if (!soap_endpoint)
        soap_endpoint = "http://198.168.0.253:7788/LT_WCF";
	if (!soap_action)
		soap_action = "http://tempuri.org/IService/Getstring";
	soap->encodingStyle = NULL;
	soap_tmp___tempuri__Getstring.tempuri__Getstring = tempuri__Getstring;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___tempuri__Getstring(soap, &soap_tmp___tempuri__Getstring);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tempuri__Getstring(soap, &soap_tmp___tempuri__Getstring, "-tempuri:Getstring", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tempuri__Getstring(soap, &soap_tmp___tempuri__Getstring, "-tempuri:Getstring", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!tempuri__GetstringResponse)
		return soap_closesock(soap);
	tempuri__GetstringResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tempuri__GetstringResponse->soap_get(soap, "tempuri:GetstringResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___tempuri__ExecuteNonQuery(struct soap *soap, const char *soap_endpoint, const char *soap_action, _tempuri__ExecuteNonQuery *tempuri__ExecuteNonQuery, _tempuri__ExecuteNonQueryResponse *tempuri__ExecuteNonQueryResponse)
{	struct __tempuri__ExecuteNonQuery soap_tmp___tempuri__ExecuteNonQuery;
	if (!soap_endpoint)
        soap_endpoint = "http://198.168.0.253:7788/LT_WCF";
	if (!soap_action)
		soap_action = "http://tempuri.org/IService/ExecuteNonQuery";
	soap->encodingStyle = NULL;
	soap_tmp___tempuri__ExecuteNonQuery.tempuri__ExecuteNonQuery = tempuri__ExecuteNonQuery;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___tempuri__ExecuteNonQuery(soap, &soap_tmp___tempuri__ExecuteNonQuery);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tempuri__ExecuteNonQuery(soap, &soap_tmp___tempuri__ExecuteNonQuery, "-tempuri:ExecuteNonQuery", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tempuri__ExecuteNonQuery(soap, &soap_tmp___tempuri__ExecuteNonQuery, "-tempuri:ExecuteNonQuery", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!tempuri__ExecuteNonQueryResponse)
		return soap_closesock(soap);
	tempuri__ExecuteNonQueryResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tempuri__ExecuteNonQueryResponse->soap_get(soap, "tempuri:ExecuteNonQueryResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___tempuri__ExecuteScalar_USCOREBool(struct soap *soap, const char *soap_endpoint, const char *soap_action, _tempuri__ExecuteScalar_USCOREBool *tempuri__ExecuteScalar_USCOREBool, _tempuri__ExecuteScalar_USCOREBoolResponse *tempuri__ExecuteScalar_USCOREBoolResponse)
{	struct __tempuri__ExecuteScalar_USCOREBool soap_tmp___tempuri__ExecuteScalar_USCOREBool;
	if (!soap_endpoint)
        soap_endpoint = "http://198.168.0.253:7788/LT_WCF";
	if (!soap_action)
		soap_action = "http://tempuri.org/IService/ExecuteScalar_Bool";
	soap->encodingStyle = NULL;
	soap_tmp___tempuri__ExecuteScalar_USCOREBool.tempuri__ExecuteScalar_USCOREBool = tempuri__ExecuteScalar_USCOREBool;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___tempuri__ExecuteScalar_USCOREBool(soap, &soap_tmp___tempuri__ExecuteScalar_USCOREBool);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tempuri__ExecuteScalar_USCOREBool(soap, &soap_tmp___tempuri__ExecuteScalar_USCOREBool, "-tempuri:ExecuteScalar_Bool", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tempuri__ExecuteScalar_USCOREBool(soap, &soap_tmp___tempuri__ExecuteScalar_USCOREBool, "-tempuri:ExecuteScalar_Bool", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!tempuri__ExecuteScalar_USCOREBoolResponse)
		return soap_closesock(soap);
	tempuri__ExecuteScalar_USCOREBoolResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tempuri__ExecuteScalar_USCOREBoolResponse->soap_get(soap, "tempuri:ExecuteScalar_BoolResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___tempuri__ExecuteScalar_USCOREString(struct soap *soap, const char *soap_endpoint, const char *soap_action, _tempuri__ExecuteScalar_USCOREString *tempuri__ExecuteScalar_USCOREString, _tempuri__ExecuteScalar_USCOREStringResponse *tempuri__ExecuteScalar_USCOREStringResponse)
{	struct __tempuri__ExecuteScalar_USCOREString soap_tmp___tempuri__ExecuteScalar_USCOREString;
	if (!soap_endpoint)
        soap_endpoint = "http://198.168.0.253:7788/LT_WCF";
	if (!soap_action)
		soap_action = "http://tempuri.org/IService/ExecuteScalar_String";
	soap->encodingStyle = NULL;
	soap_tmp___tempuri__ExecuteScalar_USCOREString.tempuri__ExecuteScalar_USCOREString = tempuri__ExecuteScalar_USCOREString;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___tempuri__ExecuteScalar_USCOREString(soap, &soap_tmp___tempuri__ExecuteScalar_USCOREString);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tempuri__ExecuteScalar_USCOREString(soap, &soap_tmp___tempuri__ExecuteScalar_USCOREString, "-tempuri:ExecuteScalar_String", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tempuri__ExecuteScalar_USCOREString(soap, &soap_tmp___tempuri__ExecuteScalar_USCOREString, "-tempuri:ExecuteScalar_String", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!tempuri__ExecuteScalar_USCOREStringResponse)
		return soap_closesock(soap);
	tempuri__ExecuteScalar_USCOREStringResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tempuri__ExecuteScalar_USCOREStringResponse->soap_get(soap, "tempuri:ExecuteScalar_StringResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___tempuri__ExecuteScalar_USCOREObject(struct soap *soap, const char *soap_endpoint, const char *soap_action, _tempuri__ExecuteScalar_USCOREObject *tempuri__ExecuteScalar_USCOREObject, _tempuri__ExecuteScalar_USCOREObjectResponse *tempuri__ExecuteScalar_USCOREObjectResponse)
{	struct __tempuri__ExecuteScalar_USCOREObject soap_tmp___tempuri__ExecuteScalar_USCOREObject;
	if (!soap_endpoint)
        soap_endpoint = "http://198.168.0.253:7788/LT_WCF";
	if (!soap_action)
		soap_action = "http://tempuri.org/IService/ExecuteScalar_Object";
	soap->encodingStyle = NULL;
	soap_tmp___tempuri__ExecuteScalar_USCOREObject.tempuri__ExecuteScalar_USCOREObject = tempuri__ExecuteScalar_USCOREObject;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___tempuri__ExecuteScalar_USCOREObject(soap, &soap_tmp___tempuri__ExecuteScalar_USCOREObject);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tempuri__ExecuteScalar_USCOREObject(soap, &soap_tmp___tempuri__ExecuteScalar_USCOREObject, "-tempuri:ExecuteScalar_Object", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tempuri__ExecuteScalar_USCOREObject(soap, &soap_tmp___tempuri__ExecuteScalar_USCOREObject, "-tempuri:ExecuteScalar_Object", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!tempuri__ExecuteScalar_USCOREObjectResponse)
		return soap_closesock(soap);
	tempuri__ExecuteScalar_USCOREObjectResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tempuri__ExecuteScalar_USCOREObjectResponse->soap_get(soap, "tempuri:ExecuteScalar_ObjectResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___tempuri__DataAdapter(struct soap *soap, const char *soap_endpoint, const char *soap_action, _tempuri__DataAdapter *tempuri__DataAdapter, _tempuri__DataAdapterResponse *tempuri__DataAdapterResponse)
{	struct __tempuri__DataAdapter soap_tmp___tempuri__DataAdapter;
	if (!soap_endpoint)
        soap_endpoint = "http://198.168.0.253:7788/LT_WCF";
	if (!soap_action)
		soap_action = "http://tempuri.org/IService/DataAdapter";
	soap->encodingStyle = NULL;
	soap_tmp___tempuri__DataAdapter.tempuri__DataAdapter = tempuri__DataAdapter;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___tempuri__DataAdapter(soap, &soap_tmp___tempuri__DataAdapter);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tempuri__DataAdapter(soap, &soap_tmp___tempuri__DataAdapter, "-tempuri:DataAdapter", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tempuri__DataAdapter(soap, &soap_tmp___tempuri__DataAdapter, "-tempuri:DataAdapter", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!tempuri__DataAdapterResponse)
		return soap_closesock(soap);
	tempuri__DataAdapterResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tempuri__DataAdapterResponse->soap_get(soap, "tempuri:DataAdapterResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___tempuri__ExecuteSqlTransaction_USCOREBool(struct soap *soap, const char *soap_endpoint, const char *soap_action, _tempuri__ExecuteSqlTransaction_USCOREBool *tempuri__ExecuteSqlTransaction_USCOREBool, _tempuri__ExecuteSqlTransaction_USCOREBoolResponse *tempuri__ExecuteSqlTransaction_USCOREBoolResponse)
{	struct __tempuri__ExecuteSqlTransaction_USCOREBool soap_tmp___tempuri__ExecuteSqlTransaction_USCOREBool;
	if (!soap_endpoint)
        soap_endpoint = "http://198.168.0.253:7788/LT_WCF";
	if (!soap_action)
		soap_action = "http://tempuri.org/IService/ExecuteSqlTransaction_Bool";
	soap->encodingStyle = NULL;
	soap_tmp___tempuri__ExecuteSqlTransaction_USCOREBool.tempuri__ExecuteSqlTransaction_USCOREBool = tempuri__ExecuteSqlTransaction_USCOREBool;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___tempuri__ExecuteSqlTransaction_USCOREBool(soap, &soap_tmp___tempuri__ExecuteSqlTransaction_USCOREBool);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tempuri__ExecuteSqlTransaction_USCOREBool(soap, &soap_tmp___tempuri__ExecuteSqlTransaction_USCOREBool, "-tempuri:ExecuteSqlTransaction_Bool", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tempuri__ExecuteSqlTransaction_USCOREBool(soap, &soap_tmp___tempuri__ExecuteSqlTransaction_USCOREBool, "-tempuri:ExecuteSqlTransaction_Bool", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!tempuri__ExecuteSqlTransaction_USCOREBoolResponse)
		return soap_closesock(soap);
	tempuri__ExecuteSqlTransaction_USCOREBoolResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tempuri__ExecuteSqlTransaction_USCOREBoolResponse->soap_get(soap, "tempuri:ExecuteSqlTransaction_BoolResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

#if defined(__BORLANDC__)
#pragma option pop
#pragma option pop
#endif

/* End of soapClient.cpp */
