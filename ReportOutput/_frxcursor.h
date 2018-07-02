*=======================================================
* _frxCursor.vcx compile constants
*=======================================================

#include foxpro_reporting.h

*=======================================================
* (See end of file for changes for SP2)
*=======================================================

*-------------------------------------------------------
* Magic numbers
*-------------------------------------------------------

*-- Report Layout object dimensions
*--
#define BAND_SEPARATOR_HEIGHT_FRUS	 	2083.333
#define BAND_SEPARATOR_HEIGHT_PIXELS	20

*-- Object Cursor filter modes:
*--
#define OBJCSR_ALL_OBJECTS_IGNORE_GROUPS	0
#define OBJCSR_FILTER_ON_SELECTED			1
#define OBJCSR_SHOW_ALL_OBJECTS				2
#define OBJCSR_FILTER_GROUP					3

#define OBJCSR_SORTORDER_TYPE		        1
#define OBJCSR_SORTORDER_BAND		        2

#define FRX_OBJTYPE_MULTISELECT             99

*-------------------------------------------------------
* Localization strings 
*-------------------------------------------------------
#IF Version(3) = [86]
	*-- FRX object targets:
	*--
	#define TARGET_MULTISELECT_LOC		"����ѡ��"
	#define TARGET_REPORT_COMMENT_LOC   "ע��"
	#define TARGET_REPORT_GLOBAL_LOC	"����/ȫ��"
	#define TARGET_WORKAREA_LOC			"������"
	#define TARGET_INDEX_LOC			"����"
	#define TARGET_RELATION_LOC			"��ϵ"	
	#define TARGET_TEXT_LABEL_LOC		"��ǩ"
	#define TARGET_LINE_LOC				"����"
	#define TARGET_BOX_LOC				"����"
	#define TARGET_FIELD_LOC			"�ֶ�"
	#define TARGET_TITLE_LOC			"����"
	#define TARGET_PAGE_HEADER_LOC		"ҳ��ͷ"
	#define TARGET_COL_HEADER_LOC		"�б�ͷ"
	#define TARGET_GROUP_HEADER_LOC		"���ͷ"
	#define TARGET_DETAIL_LOC			"ϸ��"
	#define TARGET_GROUP_FOOTER_LOC		"��ע��"
	#define TARGET_COL_FOOTER_LOC		"��ע��"
	#define TARGET_PAGE_FOOTER_LOC		"ҳע��"
	#define TARGET_SUMMARY_LOC			"��Ҫ"
	#define TARGET_DETAIL_HEADER_LOC	"ϸ�ڱ�ͷ"
	#define TARGET_DETAIL_FOOTER_LOC	"ϸ��ע��"
	#define TARGET_UNKNOWN_BAND_LOC		"δ֪��������"
	#define TARGET_GROUPED_LOC			"�������"
	#define TARGET_PICTURE_LOC			"ͼƬ/OLE �󶨿ؼ�"
	#define TARGET_VARIABLE_LOC			"����"
	#define TARGET_PDRIVER_LOC			"��ӡ����������"
	#define TARGET_FONTRESO_LOC			"������Դ"
	#define TARGET_DATAENV_LOC			"���ݻ���"
	#define TARGET_CURSOR_LOC			"�α�"
	#define TARGET_UNKNOWN_LOC			"δ֪Ŀ������"

	#define TARGET_FORCED_PAGEHEADER_LOC "�ѽ���Ϊҳ��ͷ"
	#define TARGET_UNPREDICTABLE_LOC     "������Ϊ"


	*-- Calculation "Reset On" combo list
	*--
	#define ENDOFREPORT_LOC		    "����"
	#define ENDOFPAGE_LOC		    "ҳ"
	#define ENDOFCOLUMN_LOC		    "��"
	#define GROUP_BY_LOC		    "�飺"
	#define DETAIL_LOC              "ϸ�� "
	#define NEW_LOC                 "�µ�"


	*-- Messagebox error messages:
	*--
	#define METADATA_DOM_ERROR_LOC		"frxCursor::getMetadataDomDoc() �д����쳣"
	#define CREATE_IC_FAILURE_LOC		"�޷������豸�����ġ�CreateIC () ����0��"


	*=======================================================
	* SP2 Constants & localization strings:
	*=======================================================

	*-- FRX object targets:
	*--
	#define TARGET_LAYOUT_ELEMENTS_LOC  "���ⱨ��ؼ��򲼾�Ԫ��"

	*-----------------------------------------------------
	* Moved from frxBuilder.h
	*-----------------------------------------------------
	#define INT_REGISTRY_TABLE		     "frxbuilder.dbf"
	#define EXT_REGISTRY_TABLE		     "reportbuilder.dbf"
	#define CONFIG_FILE_REGISTRY_TOKEN   "reportbuilder_registry"

	#define MAX_ATTRIBS_IN_MEMBER_XML	254

	*#define DEFAULT_MEMBERDATA_XML		[<?xml version = "1.0" encoding="Windows-1252" standalone="yes"?><VFPData><reportdata name="" type="R" script="" execute="" execwhen="" class="" classlib="" declass="" declasslib=""/></VFPData>]

	#define DEFAULT_MEMBERDATA_XML		[<VFPData><reportdata name="" type="R" script="" execute="" execwhen="" class="" classlib="" declass="" declasslib=""/></VFPData>]

	#define CURSOR_COLUMN_LIMIT			255

	#define METADATA_XML_REPLACE_LOC	"�Ƿ�Ҫ����Ч��Ĭ�� XML Ƭ���滻��Ա���ݣ�"

	#define METADATA_LOAD_ERROR_LOC		"������� (ID: " + UNIQUEID + "��Ч��" + chr(13) + "����ĳ�Ա����ָ������ԡ�"  
                                                               
	#define METADATA_CUMULATIVE_ERROR_LOC	"ĳЩ��������еĳ�Ա���ݲ��ܱ����롣" + chr(13) + "ĳЩ��̬�����ܿ��ܶ�ʧ," + chr(13) + "���߱������п����޷��ɹ���ɡ�" 

	#define METADATA_NOT_XML_ERROR_LOC		"���ڴ˶���, �����ֵ�ǰ�����������ʽ��Ϣ: " + chr(13)+chr(13) + left(STYLE,20) + chr(13)+chr(13) + "������Ǵ� DOS ����ת���Ľ��. " + chr(13) + "����������, ����Ϣ�����滻.  "+chr(13)+" (������Ӱ��ñ����� DOS �µ�������Ϊ��"+chr(13)+"���������"

	#IFNDEF DEFAULT_MBOX_TITLE_LOC                                 
		#define DEFAULT_MBOX_TITLE_LOC    "FoxPro ����"
	#ENDIF

	#define FRXSCRIPTWRITER_GENERAL_LOC             "���ɵ� user-dynamic ����"
	#define FRXSCRIPTWRITER_EVALUATECONTENTS_LOC    "��� EvaluateContents ����"
	#define FRXSCRIPTWRITER_ADJUSTOBJECTSIZE_LOC    "��� AdjustObjectSize ����"
	#define FRXSCRIPTWRITER_DYNAMICPARAMS1_LOC      "����Ĵ����Ǵӱ�׼��ʽ���������"
	#define FRXSCRIPTWRITER_DYNAMICPARAMS2_LOC      "fxMemberDataScript.ApplyFx ������ʹ��"
	#define FRXSCRIPTWRITER_DYNAMICPARAMS3_LOC      "��������Խ������ CASE �ṹ���в�ճ����"
	#define FRXSCRIPTWRITER_DYNAMICPARAMS4_LOC      "�����Ը�⣬�������֮��ʹ�ó�Ա���ݱ�׼�ű�"

	#define FRXSCRIPTWRITER_USERLABEL_LOC           "�û�������"
	#define FRXSCRIPTWRITER_DEFAULT_LOC             "FRX �����Ĭ�Ͻ��"

	#define FRXSCRIPTWRITER_EXPRESSIONRULES_LOC     "���ʽ������(" + ["] + ",',[]) ֮�е�������������ϡ�"
	#define FRXSCRIPTWRITER_CONDITIONRULES_LOC      "�ڵ�ǰ���������ݹ������н��м��㡣"


	#define FRXSCRIPTWRITER_EVALRULES1_LOC          "������Ҫ���ʽ��"
	#define FRXSCRIPTWRITER_EVALRULES2_LOC          "�����ڵ�ǰ(����)���ݹ����ڼ�����ʽ��Ȼ���� FRX ���ݹ������н��м��㡣"
	#define FRXSCRIPTWRITER_EVALRULES3_LOC          "������ʹ���ı�ֵ��"

	#define FRXSCRIPTWRITER_ADJUSTOBJRULES1_LOC     "��Щ��ʹ���ı�ֵ"
	#define FRXSCRIPTWRITER_ADJUSTOBJRULES2_LOC     "�����ֵΪ��ֵ�ı��ʽ��"
	#define FRXSCRIPTWRITER_ADJUSTOBJRULES3_LOC     "�ڵ�ǰ (����) ���ݹ������м�����ʽ��"
#ELSE
	*-- FRX object targets:
	*--
	#define TARGET_MULTISELECT_LOC		"Multiple Selection"
	#define TARGET_REPORT_COMMENT_LOC   "Comment"
	#define TARGET_REPORT_GLOBAL_LOC	"Report/Global"
	#define TARGET_WORKAREA_LOC			"Workarea"
	#define TARGET_INDEX_LOC			"Index"
	#define TARGET_RELATION_LOC			"Relation"	
	#define TARGET_TEXT_LABEL_LOC		"Label"
	#define TARGET_LINE_LOC				"Line"
	#define TARGET_BOX_LOC				"Rectangle"
	#define TARGET_FIELD_LOC			"Field"
	#define TARGET_TITLE_LOC			"Title"
	#define TARGET_PAGE_HEADER_LOC		"Page Header"
	#define TARGET_COL_HEADER_LOC		"Column Header"
	#define TARGET_GROUP_HEADER_LOC		"Group Header"
	#define TARGET_DETAIL_LOC			"Detail"
	#define TARGET_GROUP_FOOTER_LOC		"Group Footer"
	#define TARGET_COL_FOOTER_LOC		"Column Footer"
	#define TARGET_PAGE_FOOTER_LOC		"Page Footer"
	#define TARGET_SUMMARY_LOC			"Summary"
	#define TARGET_DETAIL_HEADER_LOC	"Detail Header"
	#define TARGET_DETAIL_FOOTER_LOC	"Detail Footer"
	#define TARGET_UNKNOWN_BAND_LOC		"Unknown band type"
	#define TARGET_GROUPED_LOC			"Grouped Objects"
	#define TARGET_PICTURE_LOC			"Picture/OLE Bound"
	#define TARGET_VARIABLE_LOC			"Variable"
	#define TARGET_PDRIVER_LOC			"Printer Driver Setup"
	#define TARGET_FONTRESO_LOC			"Font Resource"
	#define TARGET_DATAENV_LOC			"Data Environment"
	#define TARGET_CURSOR_LOC			"Cursor"
	#define TARGET_UNKNOWN_LOC			"Unknown Target type"

	#define TARGET_FORCED_PAGEHEADER_LOC "Resolved as Page Header"
	#define TARGET_UNPREDICTABLE_LOC     "Indeterminate behavior"


	*-- Calculation "Reset On" combo list
	*--
	#define ENDOFREPORT_LOC		    "Report"
	#define ENDOFPAGE_LOC		    "Page"
	#define ENDOFCOLUMN_LOC		    "Column"
	#define GROUP_BY_LOC		    "Group: "
	#define DETAIL_LOC              "Detail "
	#define NEW_LOC                 "new"


	*-- Messagebox error messages:
	*--
	#define METADATA_DOM_ERROR_LOC		"Exception occurred in frxCursor::getMetadataDomDoc()"
	#define CREATE_IC_FAILURE_LOC		"Unable to create device context. CreateIC() returned 0."


	*=======================================================
	* SP2 Constants & localization strings:
	*=======================================================

	*-- FRX object targets:
	*--
	#define TARGET_LAYOUT_ELEMENTS_LOC  "Any Report control or layout element"

	*-----------------------------------------------------
	* Moved from frxBuilder.h
	*-----------------------------------------------------
	#define INT_REGISTRY_TABLE		     "frxbuilder.dbf"
	#define EXT_REGISTRY_TABLE		     "reportbuilder.dbf"
	#define CONFIG_FILE_REGISTRY_TOKEN   "reportbuilder_registry"

	#define MAX_ATTRIBS_IN_MEMBER_XML	254

	*#define DEFAULT_MEMBERDATA_XML		[<?xml version = "1.0" encoding="Windows-1252" standalone="yes"?><VFPData><reportdata name="" type="R" script="" execute="" execwhen="" class="" classlib="" declass="" declasslib=""/></VFPData>]

	#define DEFAULT_MEMBERDATA_XML		[<VFPData><reportdata name="" type="R" script="" execute="" execwhen="" class="" classlib="" declass="" declasslib=""/></VFPData>]

	#define CURSOR_COLUMN_LIMIT			255

	#define METADATA_XML_REPLACE_LOC	"Do you want to replace the metadata with a valid default XML fragment?"

	#define METADATA_LOAD_ERROR_LOC		"The metadata for a report definition row (ID: " +                                  UNIQUEID + ") is invalid." + chr(13) + "Metadata instructions for this item will be ignored."  
                                                               
	#define METADATA_CUMULATIVE_ERROR_LOC	"The metadata for some report definition rows" + chr(13) + "could not be loaded."+CHR(13) + "Some dynamic report features may be missing," + chr(13) + "or a report run may not conclude successfully." 

	#define METADATA_NOT_XML_ERROR_LOC		"For this object, the report layout currently contains unexpected STYLE information:" + chr(13)+chr(13) + left(STYLE,20) + chr(13)+chr(13) + "This may be a consequence of a conversion from a FoxPro DOS report." + chr(13) + "If you save your changes, this information will be replaced."+chr(13)+"(It will not affect the existing behavior of this report in FoxPro DOS.)"+chr(13)+"Do you wish to continue?"

	#IFNDEF DEFAULT_MBOX_TITLE_LOC                                 
		#define DEFAULT_MBOX_TITLE_LOC    "FoxPro Reporting"
	#ENDIF

	#define FRXSCRIPTWRITER_GENERAL_LOC             "generated user-dynamic code"
	#define FRXSCRIPTWRITER_EVALUATECONTENTS_LOC    "for EvaluateContents method"
	#define FRXSCRIPTWRITER_ADJUSTOBJECTSIZE_LOC    "for AdjustObjectSize method"
	#define FRXSCRIPTWRITER_DYNAMICPARAMS1_LOC      "the following code translates from the standard"
	#define FRXSCRIPTWRITER_DYNAMICPARAMS2_LOC      "fxMemberDataScript.ApplyFx parameters, which are used"
	#define FRXSCRIPTWRITER_DYNAMICPARAMS3_LOC      "so you can cut and paste the CASEs below into"
	#define FRXSCRIPTWRITER_DYNAMICPARAMS4_LOC      "Memberdata standard script later if you want to"

	#define FRXSCRIPTWRITER_USERLABEL_LOC           "user condition: "
	#define FRXSCRIPTWRITER_DEFAULT_LOC             "default result from FRX definition"

	#define FRXSCRIPTWRITER_EXPRESSIONRULES_LOC     "Combinations of any 2 out of the 3 delimiter types (" +["]+ ",',[]) permitted within expressions."
	#define FRXSCRIPTWRITER_CONDITIONRULES_LOC      "Conditions are evaluated in the Current (Report) datasession."


	#define FRXSCRIPTWRITER_EVALRULES1_LOC          "Expression required for this item. "
	#define FRXSCRIPTWRITER_EVALRULES2_LOC          "Expression evaluated first in Current (Report) datasession, then in FRX datasession."
	#define FRXSCRIPTWRITER_EVALRULES3_LOC          "Additional items use literal values."

	#define FRXSCRIPTWRITER_ADJUSTOBJRULES1_LOC     "These items use literal values"
	#define FRXSCRIPTWRITER_ADJUSTOBJRULES2_LOC     "or expressions that evaluate to numeric values."
	#define FRXSCRIPTWRITER_ADJUSTOBJRULES3_LOC     "Expressions are evaluated in the Current (Report) datasession."
#ENDIF






