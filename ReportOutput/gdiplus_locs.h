#IF Version(3) = [86]
	*
	*	GDI+ 本地化字符串
	*
	#ifndef _GDIPLUS_LOCS_H_INCLUDED


	* Error messages
	#define _GDIPLUS_GDIPLUSNOTINIT_LOC			'GDI+ 没有初始化'
	#define _GDIPLUS_NOGDIPOBJECT_LOC			'GDI+ 对象没有创建或关联'
	#define _GDIPLUS_GDIPNOTOWNED_LOC			'GDI+ 对象不属于VFP对象'
	#define _GDIPLUS_INTERNALBUFTOOSMALL_LOC	'内部错误：缓冲区太小'
	#define _GDIPLUS_STRINGTOGUID_LOC			'StringToGUID 错误代码 ' + ltrim(str(m.lnResult))
	#define _GDIPLUS_MALLOCFAIL_LOC				'内存分配失败'
	#define _GDIPLUS_BADPROPERTYTAGTYPE_LOC		'属性标记类型未知或无效'
	#define _GDIPLUS_BADENCODERPARAMSTRING_LOC	'编码器参数字符串无效'
	#define _GDIPLUS_BADENCODERPARAMNAME_LOC	'无效的编码器参数名称 "'+m.lcName+'"'
	#define _GDIPLUS_BADENCODERPARAMNAMETYPE_LOC	'编码器参数名称的数据类型无效'
	#define _GDIPLUS_BADENCODERPARAMVALUE_LOC	'编码器参数值无效'

	* Error handler
	#define _GDIPLUS_ERRNOLABEL_LOC				"错误:           "
	#define _GDIPLUS_ERRPROCLABEL_LOC			"方法:       "
	#define _GDIPLUS_ERRLINELABEL_LOC			"行:            "



	#endif && _GDIPLUS_LOCS_H_INCLUDED
#ELSE
	*
	*	GDI+ Localisation strings
	*

	#ifndef _GDIPLUS_LOCS_H_INCLUDED

	* Error messages
	#define _GDIPLUS_GDIPLUSNOTINIT_LOC			'GDI+ not initialized'
	#define _GDIPLUS_NOGDIPOBJECT_LOC			'GDI+ object not created or associated'
	#define _GDIPLUS_GDIPNOTOWNED_LOC			'GDI+ object not owned by VFP object'
	#define _GDIPLUS_INTERNALBUFTOOSMALL_LOC	'Internal error: buffer too small'
	#define _GDIPLUS_STRINGTOGUID_LOC			'StringToGUID error code ' + ltrim(str(m.lnResult))
	#define _GDIPLUS_MALLOCFAIL_LOC				'Memory allocation failed'
	#define _GDIPLUS_BADPROPERTYTAGTYPE_LOC		'Unknown or invalid property tag type'
	#define _GDIPLUS_BADENCODERPARAMSTRING_LOC	'Invalid encoder parameter string'
	#define _GDIPLUS_BADENCODERPARAMNAME_LOC	'Invalid encoder parameter name "'+m.lcName+'"'
	#define _GDIPLUS_BADENCODERPARAMNAMETYPE_LOC	'Invalid data type for encoder parameter name'
	#define _GDIPLUS_BADENCODERPARAMVALUE_LOC	'Invalid encoder parameter value'

	* Error handler
	#define _GDIPLUS_ERRNOLABEL_LOC				"Error:           "
	#define _GDIPLUS_ERRPROCLABEL_LOC			"Method:       "
	#define _GDIPLUS_ERRLINELABEL_LOC			"Line:            "

	#endif && _GDIPLUS_LOCS_H_INCLUDED
#ENDIF