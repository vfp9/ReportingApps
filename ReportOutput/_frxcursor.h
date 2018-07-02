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
	#define TARGET_MULTISELECT_LOC		"多重选择"
	#define TARGET_REPORT_COMMENT_LOC   "注释"
	#define TARGET_REPORT_GLOBAL_LOC	"报表/全局"
	#define TARGET_WORKAREA_LOC			"工作区"
	#define TARGET_INDEX_LOC			"索引"
	#define TARGET_RELATION_LOC			"关系"	
	#define TARGET_TEXT_LABEL_LOC		"标签"
	#define TARGET_LINE_LOC				"线条"
	#define TARGET_BOX_LOC				"矩形"
	#define TARGET_FIELD_LOC			"字段"
	#define TARGET_TITLE_LOC			"标题"
	#define TARGET_PAGE_HEADER_LOC		"页标头"
	#define TARGET_COL_HEADER_LOC		"列标头"
	#define TARGET_GROUP_HEADER_LOC		"组标头"
	#define TARGET_DETAIL_LOC			"细节"
	#define TARGET_GROUP_FOOTER_LOC		"组注脚"
	#define TARGET_COL_FOOTER_LOC		"列注脚"
	#define TARGET_PAGE_FOOTER_LOC		"页注脚"
	#define TARGET_SUMMARY_LOC			"概要"
	#define TARGET_DETAIL_HEADER_LOC	"细节标头"
	#define TARGET_DETAIL_FOOTER_LOC	"细节注脚"
	#define TARGET_UNKNOWN_BAND_LOC		"未知带区类型"
	#define TARGET_GROUPED_LOC			"分组对象"
	#define TARGET_PICTURE_LOC			"图片/OLE 绑定控件"
	#define TARGET_VARIABLE_LOC			"变量"
	#define TARGET_PDRIVER_LOC			"打印机驱动设置"
	#define TARGET_FONTRESO_LOC			"字体资源"
	#define TARGET_DATAENV_LOC			"数据环境"
	#define TARGET_CURSOR_LOC			"游标"
	#define TARGET_UNKNOWN_LOC			"未知目标类型"

	#define TARGET_FORCED_PAGEHEADER_LOC "已解析为页标头"
	#define TARGET_UNPREDICTABLE_LOC     "不定行为"


	*-- Calculation "Reset On" combo list
	*--
	#define ENDOFREPORT_LOC		    "报表"
	#define ENDOFPAGE_LOC		    "页"
	#define ENDOFCOLUMN_LOC		    "列"
	#define GROUP_BY_LOC		    "组："
	#define DETAIL_LOC              "细节 "
	#define NEW_LOC                 "新的"


	*-- Messagebox error messages:
	*--
	#define METADATA_DOM_ERROR_LOC		"frxCursor::getMetadataDomDoc() 中触发异常"
	#define CREATE_IC_FAILURE_LOC		"无法创建设备上下文。CreateIC () 返回0。"


	*=======================================================
	* SP2 Constants & localization strings:
	*=======================================================

	*-- FRX object targets:
	*--
	#define TARGET_LAYOUT_ELEMENTS_LOC  "任意报表控件或布局元素"

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

	#define METADATA_XML_REPLACE_LOC	"是否要用有效的默认 XML 片段替换成员数据？"

	#define METADATA_LOAD_ERROR_LOC		"表定义的行 (ID: " + UNIQUEID + "无效。" + chr(13) + "此项的成员数据指令将被忽略。"  
                                                               
	#define METADATA_CUMULATIVE_ERROR_LOC	"某些报表定义的行的成员数据不能被载入。" + chr(13) + "某些动态报表功能可能丢失," + chr(13) + "或者报表运行可能无法成功完成。" 

	#define METADATA_NOT_XML_ERROR_LOC		"对于此对象, 报表布局当前包含意外的样式信息: " + chr(13)+chr(13) + left(STYLE,20) + chr(13)+chr(13) + "这可能是从 DOS 报表转换的结果. " + chr(13) + "如果保存更改, 此信息将被替换.  "+chr(13)+" (它不会影响该报告在 DOS 下的现有行为。"+chr(13)+"你想继续吗？"

	#IFNDEF DEFAULT_MBOX_TITLE_LOC                                 
		#define DEFAULT_MBOX_TITLE_LOC    "FoxPro 报表"
	#ENDIF

	#define FRXSCRIPTWRITER_GENERAL_LOC             "生成的 user-dynamic 代码"
	#define FRXSCRIPTWRITER_EVALUATECONTENTS_LOC    "针对 EvaluateContents 方法"
	#define FRXSCRIPTWRITER_ADJUSTOBJECTSIZE_LOC    "针对 AdjustObjectSize 方法"
	#define FRXSCRIPTWRITER_DYNAMICPARAMS1_LOC      "下面的代码是从标准方式翻译过来的"
	#define FRXSCRIPTWRITER_DYNAMICPARAMS2_LOC      "fxMemberDataScript.ApplyFx 参数，使用"
	#define FRXSCRIPTWRITER_DYNAMICPARAMS3_LOC      "所以你可以将下面的 CASE 结构剪切并粘贴到"
	#define FRXSCRIPTWRITER_DYNAMICPARAMS4_LOC      "如果你愿意，你可以在之后使用成员数据标准脚本"

	#define FRXSCRIPTWRITER_USERLABEL_LOC           "用户条件："
	#define FRXSCRIPTWRITER_DEFAULT_LOC             "FRX 定义的默认结果"

	#define FRXSCRIPTWRITER_EXPRESSIONRULES_LOC     "表达式中允许(" + ["] + ",',[]) 之中的任意两个的组合。"
	#define FRXSCRIPTWRITER_CONDITIONRULES_LOC      "在当前（报表）数据工作期中进行计算。"


	#define FRXSCRIPTWRITER_EVALRULES1_LOC          "此项需要表达式。"
	#define FRXSCRIPTWRITER_EVALRULES2_LOC          "首先在当前(报表)数据工作期计算表达式，然后在 FRX 数据工作期中进行计算。"
	#define FRXSCRIPTWRITER_EVALRULES3_LOC          "其他项使用文本值。"

	#define FRXSCRIPTWRITER_ADJUSTOBJRULES1_LOC     "这些项使用文本值"
	#define FRXSCRIPTWRITER_ADJUSTOBJRULES2_LOC     "或计算值为数值的表达式。"
	#define FRXSCRIPTWRITER_ADJUSTOBJRULES3_LOC     "在当前 (报表) 数据工作期中计算表达式。"
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






