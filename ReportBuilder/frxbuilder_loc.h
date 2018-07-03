#If Version(3) = [86]
	*-------------------------------------------------------
	* UI control captions (not already LOC'd) :

	* see a comment below with the above line
	* to see how to turn on LOC'ing all interface
	* elements
	*-------------------------------------------------------

	*=======================================================
	* Report Builder localization constants
	*=======================================================
	* (For localization - see also: frxcursor.h)

	#Define c_CR	Chr(13)
	#Define c_LF    Chr(10)
	#Define c_CRLF  Chr(13)+Chr(10)
	#Define c_CR2	Chr(13)+Chr(13)
	#Define c_TAB	Chr(9)

	*=======================================================
	* Constants defined for original VFP9 RTM release:
	*=======================================================

	*-------------------------------------------------------
	* Event Types
	*-------------------------------------------------------
	#Define EVTYP_RIGHTCLICK_LOC		"(����)"
	#Define EVTYP_PROPERTIES_LOC		"���ԶԻ���"
	#Define EVTYP_OBJECT_CREATE_LOC		"���󴴽�"
	#Define EVTYP_OBJECT_CHANGE_LOC		"�������"
	#Define EVTYP_OBJECT_REMOVE_LOC		"�����Ƴ�"
	#Define EVTYP_OBJECT_PASTE_LOC		"����ճ��"
	#Define EVTYP_REPORT_SAVE_LOC       "������"
	#Define EVTYP_REPORT_OPEN_LOC		"�����"
	#Define EVTYP_REPORT_CLOSE_LOC		"����ر�"
	#Define EVTYP_DATAENV_LOC			"�����ݻ���"
	#Define EVTYP_PRINT_PREVIEW_LOC		"��ӡԤ��ģʽ"
	#Define EVTYP_OPTIONAL_BANDS_LOC	"��ѡ�����Ի���"
	#Define EVTYP_DATA_GROUPING_LOC		"���ݷ���Ի���"
	#Define EVTYP_VARIABLES_LOC			"�����Ի���"
	#Define EVTYP_EDIT_IN_PLACE_LOC     "�༭��ǩ�ı�"
	#Define EVTYP_OBJECT_DROP_LOC       "�����ݻ�����������"
	#Define EVTYP_SET_GRID_SCALE_LOC    "���� Grid ����"
	#Define EVTYP_IMPORT_DE_LOC         "�������ݻ���"
	#Define EVTYP_PRINT_LOC             "��ӡ����"
	#Define EVTYP_QUICKREPORT_LOC       "���ٱ���"
	#Define EVTYP_UNKNOWN_LOC			"δ֪�¼�"

	*-------------------------------------------------------
	* Dialog Captions:
	*-------------------------------------------------------

	*#define DLG_TITLE_NEW_PREFIX_LOC		"�½� "
	#Define DLG_TITLE_NEW_PREFIX_LOC		""
	#Define DLG_TITLE_PROPERTIES_LOC		" ����"
	#Define DLG_TITLE_BAND_LOC				" ����"
	#Define DLG_TITLE_READONLY_SUFFIX_LOC	" [ֻ��]"

	*-------------------------------------------------------
	* Dialog context menu prompts:
	*-------------------------------------------------------

	#Define UI_CONTEXT_EVENT_INSPECTOR_LOC	"�¼������r..."
	#Define UI_CONTEXT_BROWSE_FRX_LOC		"��� FRX..."
	#Define UI_CONTEXT_OPTIONS_DIALOG_LOC  	"ѡ��..."
	#Define UI_TOOLSMENU_OPTIONS_MESSAGE_LOC [��ʾ"Ĭ�ϱ���������ѡ��"�Ի��� ]

	*-------------------------------------------------------
	* Message box strings:
	*-------------------------------------------------------

	#Define DEFAULT_MBOX_TITLE_LOC          	"����������"
	#Define RB_INVALID_PARAMETERS_LOC		    "ʹ����Ч�������ñ�����������"
	#Define RB_FILE_NOT_FOUND_LOC			    "�޷���ָ���ı����ļ���"
	#Define EVENT_INSPECTOR_TITLE_LOC           "�����������¼�"
	#Define RB_GETEXPR_FAILURE_LOC              "GetExpression ������򲻿��á�����Ϊʹ�� INPUTBOX () ��"
	#Define RB_DEF_GETEXPR_PROMPT_LOC           "������ʽ��"

	#Define RB_EXCEPTION_HEADER_LOC             "����������������һ���޷��ָ����쳣��"
	#Define RB_ERROR_NEWOBJECT_LOC              "�����������޷�ʵ���������ࣺ"
	#Define RB_ERROR_CHECK_REGISTRY_LOC         "��ȷ��ע�������ȷ���á�"

	#Define DEVICEHELPER_ERROR_LOC				"�޷��ӱ����ӡ�������ж�ȡҳ�沼����Ϣ��"+ Chr(13) + "���� "
	#Define NO_PRINTERS_INSTALLED_LOC			"û�а�װ��ӡ����ҳ�沼�����ÿ��ܲ����á�"
	#Define PRINTER_INSTALLED_OK_LOC			"��л����װ��ӡ�������ڿ������ô˱����ҳ�沼��ѡ�"

	#Define RUNTIME_EXT_XML_HELPER_TXT_LOC		"ֱ�ӱ༭ XML, ��Ҫע�Ᵽ����Ч�� xml ��ʽ�����棺 ���Ի���ر�ʱ, ���������ܻ����±�д XML ��ĳЩ���֡�"
	#Define RUNTIME_EXT_NO_FRX_LOC				"FRX �α�δָ���򲻿��á��޷��༭�����Ա���ݡ�"

	#Define UNABLE_TO_COPY_REGISTRY_LOC         "�޷�����ע���ĸ�����"
	#Define OVERWRITE_EXISTING_REGISTRY_LOC     "�Ƿ񸲸�����ע���"
	#Define FILE_EXISTS_LOC					    "�ļ��Ѵ��ڣ�"
	#Define REGISTRY_TABLE_LOC				    "ע���"

	#Define FEATURE_IS_PROTECTED_LOC		    "�˺����ڱ�����������ܱ���ģʽ�в����á�"
	#Define OBJECT_LOCK_LOC             	    "�˶�����ܲ��ܱ��ƶ���"
	#Define DELETE_MBOX_TITLE_LOC			    "����ɾ��"
	#Define DELETE_MBOX_MSG_LOC        		    "{%1} �����ܱ��������ܱ�ɾ����"
	#Define OBJECT_NO_EDIT_LOC          	    "�˶�����ܲ��ܱ��༭��"

	#Define GROUPED_ITEM_PROPERTIES_LOC		    [��Щ����顣��Ҫ�༭��������Ԫ�ص�����, ��������ʹ�� "��ʽ" �˵�ȡ�������ǵķ��顣]

	#Define TEXTLABEL_INVALID_CAPTION_MSG_LOC	"���������ǩ���⡣"
	#Define FIELDEXPR_INVALID_CAPTION_MSG_LOC   "���������ֶα��ʽ��"
	#Define PICTURE_INVALID_SOURCE_MSG_LOC      "��������ͼƬԴ��"
	#Define PICTURE_INVALID_FILENAME_MSG_LOC	"�Ҳ���Դ�ļ�����ѡ����Ч��ͼƬԴ��"

	#Define PROPEDIT_MBOX_TITLE_LOC			    "�޷�����"
	#Define USE_REG_ERR_MBOX_MSG_LOC		    "�޷���ע�������� {%1}����ʹ��Ĭ�ϵ��ڲ� lookup ��"

	#Define PRINTER_NAME_SUFFIX_DEFAULT_LOC	    " (Ĭ��)"

	#Define METADATA_DOM_CREATE_FAILED_LOC 	    "�޷����� MSXml.DomDocument ʵ������Ա���� XML ���ܲ����á�"
	#Define METADATA_XML_INVALID_LOC		    "�˱���Ԫ�صĳ�Ա���� XML ��Ч��"
	*#define METADATA_XML_REPLACE_LOC			*** MOVED TO _frxcursor.h

	#Define BAND_REMOVE_WARNING_LOC			    "{%1} ��������� {%2} �����С�"+c_CR+"����������ڱ�����, �����ڱ��沼���е�λ��"+c_CR+"�ڴ����Ƴ����ǲ���Ԥ֪�ġ�"+c_CR2+"�Ƿ�ҲҪɾ����Щ����"+c_CR2+"��"+c_TAB+"- ɾ�������еĵ�ǰ����"+c_CR+"��"+c_TAB+"- ���������ڱ������С�"+c_CR+"ȡ��"+c_TAB+"- ���ضԻ������ɾ���κ����ݡ�"

	#Define DETAIL_BAND_REMOVE_WARN_LOC		    "��ϸ�ڴ����д��� {%1} ����"+c_CR+"�Ƿ�ȷʵҪɾ���ô����Լ�����"
	#Define GROUP_BAND_REMOVE_WARN_LOC		    "{%1} ��������ڴ���ı�ͷ��ע���С�"+c_CR+"�Ƿ�ȷʵҪɾ�������ݷ����Լ�����"

	#Define QUERY_SUSPEND_EXECUTION_LOC 	    "�Ƿ�Ҫ��ִͣ�У�"

	#Define EDIT_REPORT_VAR_PROMPT_LOC		    "�������ƣ�"
	#Define EDIT_REPORT_VAR_CAPTION_LOC		    "�������"

	#Define LOAD_DE_CONFIRMATION_LOC			"�⽫�滻�����������е����ݻ�����Ϣ���Ƿ������"
	#Define LOAD_DE_ERROR_LOC					"��ͼ��ȡԴ����ʱ����"
	#Define LOAD_DE_INVALID_CLASS_LOC       	[����ѡ�����Ϊ "DataEnvironment" ���ࡣ]
	#Define LOAD_DE_ERR_INSTANTIATING_CLASS_LOC	"����ʵ�������ݻ�����ʱ�������, ����޷��������ӵ�����"
	#Define DE_METHOD_HEADER_COMMENT_LOC		"* �˷��������ɱ������������� *"
	#Define LOAD_DE_SUCCESS_LOC					[����"ȷ��"�Ա������ʱ, �����´˱�������ݻ�����]

	#Define OTHER_EDIT_COMMENT_LOC			"ע�ʹ洢�ڱ��� (. frx) �ļ��� COMMENTS �ֶ���, �������治ʹ������"

	#Define OTHER_EDIT_USER_LOC					"�û����ݴ洢�ڱ��� (. frx) �ļ��� USER �ֶ���, ���ұ������治ʹ������"

	#Define OTHER_EDIT_TOOLTIP_LOC				"�ڱ������������ʾ���ֶ���Ĺ�����ʾ��"

	#Define OTHER_EDIT_METADATA_LOC 			"����ʱ��չָ��������ʱ ReportListener ����ɼ��Ĵ���Ԫ�ء�"

	#Define METADATA_HELPER_TEXT_LOC			"����ʱ��չָ�� ReportListener ����ɼ��Ĵ���Ԫ�ء���ָ�� ReportListener ������Լ�����ȷ���Ƿ�������չ�ı��ʽʱִ�С�"

	#Define EDIT_SCRIPT_DLG_CAPTION_LOC			"�༭����ʱ�ű�"
	#Define EDIT_META_XML_DLG_CAPTION_LOC		"��Ա���� XML"

	#Define LABEL_EDIT_CAPTION_LOC              "��ǩ����"
	#Define LABEL_EDIT_COMMENT_LOC				"��ǩ�ı��ⳤ�Ȳ��ó���254���ַ��������ַ��������ԡ�"
	#Define REPORT_VAR_INVALID_NAME_LOC			"��ָ����Ч�ı�������"

	#Define REPORT_VAR_DUPLICATE_NAME_LOC       "��ָ��Ψһ�ı�������"

	#Define OPTIONS_DEFAULT_INTERNAL_LOOKUP_LOC		"�ڲ� lookup ��"
	#Define OPTIONS_HANDLER_REGISTRY_PROMPT_LOC		"ע����������"
	#Define OPTIONS_GETFILE_REGISTRY_TITLE_LOC		"ѡ��ע����¼��������"
	#Define OPTIONS_HANDLER_REGISTRY_INVALID_LOC	"ָ���ı����ڻ���Ч��"

	#Define DTL_HELPER_TEXT_LOC  					"���ܱ����ı�������ڼ�, ���ʱ������ʾ�ڲ�����, �������ֶα��ʽ�С�"

	#Define OLEBOUND_DPI_HELPERTEXT_LOC				"ͨ���������ڳ��ֱ���� DPI, ���Ե������� OLE �󶨶���ı�������ܡ�"

	*-------------------------------------------------------
	* Page Layout Preview Control:
	*-------------------------------------------------------

	#Define PAGELAYOUT_FORM_CAPTION_LOC				"ҳ�沼����ϸ��Ϣ"

	#Define PAGELAYOUT_INFO_PAGE_WIDTH_LOC			"ҳ�� = "
	#Define PAGELAYOUT_INFO_PAGE_HEIGHT_LOC			"ҳ�� = "
	#Define PAGELAYOUT_INFO_ORIENTATION_LOC			"���� = "
	#Define PAGELAYOUT_INFO_UNPRINT_TOP_LOC			"���ɴ�ӡ���ϱ߾� = "
	#Define PAGELAYOUT_INFO_UNPRINT_LEFT_LOC		"���ɴ�ӡ����߾� = "
	#Define PAGELAYOUT_INFO_EXTRA_LEFT_LOC			"������߾� = "
	#Define PAGELAYOUT_INFO_COL_COUNT_LOC			"���� = "
	#Define PAGELAYOUT_INFO_COL_WIDTH_LOC			"�п� = "
	#Define PAGELAYOUT_INFO_COL_SPACE_LOC			"�пռ� = "
	#Define PAGELAYOUT_INFO_HEADER_SIZE_LOC			"��ͷ�ߴ� = "
	#Define PAGELAYOUT_INFO_FOOTER_SIZE_LOC			"ע�ųߴ� = "

	*-------------------------------------------------------
	* Calculation combo list:
	*-------------------------------------------------------

	#Define CALCULATE_NOTHING_LOC	    "��"
	#Define CALCULATE_COUNT_LOC		    "����"
	#Define CALCULATE_SUM_LOC		    "���"
	#Define CALCULATE_AVERAGE_LOC	    "ƽ��ֵ"
	#Define CALCULATE_LOWEST_LOC	    "��Сֵ"
	#Define CALCULATE_HIGHEST_LOC	    "���ֵ"
	#Define CALCULATE_STDDEV_LOC	    "��׼ƫ��"
	#Define CALCULATE_VARIANCE_LOC	    "����"

	#Define PICTUREMODE_CLIP_LOC                "��������"
	#Define PICTUREMODE_SCALE_KEEP_SHAPE_LOC    "��������, ������״"
	#Define PICTUREMODE_SCALE_STRETCH_LOC       "��������, �����"

	*-------------------------------------------------------
	* Line/Shape Styles:
	*-------------------------------------------------------

	#Define LINE_STYLE_0_LOC			"��"
	#Define LINE_STYLE_1_LOC			"����"
	#Define LINE_STYLE_2_LOC			"������"
	#Define LINE_STYLE_3_LOC			"�㻮��"
	#Define LINE_STYLE_4_LOC			"��㻮��"
	#Define LINE_STYLE_5_LOC			"΢��"
	#Define LINE_STYLE_6_LOC			"С��"
	#Define LINE_STYLE_7_LOC			"���"
	#Define LINE_STYLE_8_LOC			"����"

	#Define LINE_WIDTH_HAIRLINE_LOC		"��ϸ"
	#Define LINE_WIDTH_1POINT_LOC		"1 �� (����)"
	#Define LINE_WIDTH_2POINT_LOC		"2 ��"
	#Define LINE_WIDTH_4POINT_LOC		"4 ��"
	#Define LINE_WIDTH_6POINT_LOC		"6 ��"

	*-------------------------------------------------------
	* Measurement units (option/combo values):
	*-------------------------------------------------------

	#Define UNITS_NORULER_LOC	 	"Ӣ�� (�ޱ��)"
	#Define UNITS_INCHES_LOC	 	"Ӣ��"
	#Define UNITS_METRIC_LOC	 	"����/cm"
	#Define UNITS_PIXELS_LOC	 	"����"
	#Define UNITS_NONPAREIL_LOC  	"Nonpariel"
	#Define UNITS_CHARACTERS_LOC 	"�ַ�"

	*-------------------------------------------------------
	* String Trimming Modes (option/combo values):
	*-------------------------------------------------------

	#Define STRINGTRIM_DEFAULT_LOC          "Ĭ���޼�"
	#Define STRINGTRIM_CHAR_LOC             "�޼���������ַ�"
	#Define STRINGTRIM_WORD_LOC             "�޼�������ĵ���"
	#Define STRINGTRIM_ELLIPSIS_CHAR_LOC    "�޼���������ַ�, ׷��ʡ�Ժ�"
	#Define STRINGTRIM_ELLIPSIS_WORD_LOC    "�޼�������ĵ���, ׷��ʡ�Ժ�"
	#Define STRINGTRIM_ELLIPSIS_FILE_LOC    "�ļ��淶�����ڲ�·����ʾΪʡ�Ժ�"

	*-------------------------------------------------------
	* UI control captions (not already LOC'd) :
	*-------------------------------------------------------

	#Define USE_LOC_STRINGS_IN_UI				.T.    && Set this .T. to enable these LOC strings in UI controls

	*-------------------------------------------------------
	* Uses code like this in each object's .Init():
	*
	*#IF USE_LOC_STRINGS_IN_UI
	*    THIS.Caption = UI_CMD_OK_LOC
	*#ENDIF
	*
	*-------------------------------------------------------

	#Define UI_CMD_OK_LOC						"ȷ��"
	#Define UI_CMD_CANCEL_LOC					"ȡ��"
	#Define UI_CMD_HELP_LOC 					"����"

	#Define UI_CMD_FONT_LOC						"����..."
	#Define UI_CMD_CLOSE_LOC					"�ر�"
	#Define UI_CMD_ADD_RECORD_LOC				"���Ӽ�¼"

	#Define UI_CMD_ADD_LOC						"����"
	#Define UI_CMD_REMOVE_LOC					"�Ƴ�"

	*--- Tab Captions:

	#Define UI_TAB_GENERAL_LOC				"����"
	#Define UI_TAB_BAND_LOC					"����"
	#Define UI_TAB_STYLE_LOC				"��ʽ"
	#Define UI_TAB_FORMAT_LOC				"��ʽ"
	#Define UI_TAB_PRINTWHEN_LOC			"��ӡ����"
	#Define UI_TAB_CALCULATE_LOC			"����"
	#Define UI_TAB_OTHER_LOC				"����"
	#Define UI_TAB_PAGELAYOUT_LOC			"ҳ�沼��"
	#Define UI_TAB_OPTIONALBANDS_LOC		"����ѡ��"
	#Define UI_TAB_DATAGROUP_LOC			"���ݷ���"
	#Define UI_TAB_VARIABLES_LOC			"����"
	#Define UI_TAB_PROTECTION_LOC			"����"
	#Define UI_TAB_RULERGRID_LOC			"��ߺ�����"
	#Define UI_TAB_DATAENV_LOC				"���ݻ���"

	#Define UI_TAB_SELECTION_LOC			"ѡ��"
	#Define UI_TAB_PROPERTIES_LOC			"����"

	*--- Options dialog:

	#Define UI_OPTIONS_FORM_CAPTION_LOC         "����������ѡ��"

	#Define UI_OPTIONS_LBL_EVENT_HANDLING_LOC	" ����������¼����� "
	#Define UI_OPTIONS_LBL_HANDLE_TEXT_LOC      "�ڴ�����������¼�ʱ, ����������"
	#Define UI_OPTIONS_LBL_HANDLER_TABLE_LOC    " ����ע��� "
	#Define UI_OPTIONS_LBL_TABLE_TEXT_LOC       "����������ʹ�� lookup ��ȷ��Ҫ���ڴ����ض��������¼���/��������͵���."
	#Define UI_OPTIONS_LBL_COPY_TEXT_LOC        "���ϣ����д����������Ĭ��ӳ���Ա���������¼�, ����Ҫ�����ڲ���������Ŀ��Զ��帱����"
	#Define UI_OPTIONS_LBL_EXPLORE_TEXT_LOC     "ע�����Դ�������ṩ��һ�������ǰ�������ע���ķ���, ��������ʵ���Ȩ��, ����и��ġ�"

	#Define UI_OPTIONS_CMD_COPY_LOC				"��������(\<C)"
	#Define UI_OPTIONS_CMD_EXPLORE_LOC			"ע��������(\<E)"

	#Define UI_OPTIONS_OPT_SEARCH_LOC           "��ע���������һ��������(\<h)(�ο�����)"
	#Define UI_OPTIONS_OPT_DEBUG_LOC            "�������¼�ʹ�õ�ʽ����(\<d)"
	#Define UI_OPTIONS_OPT_INSPECT_LOC          "�������¼�ʹ���¼������(\<v)"
	#Define UI_OPTIONS_OPT_IGNORE_LOC           "��ȫ�����������¼�(\<I)"
	#Define UI_OPTIONS_OPT_USE_INTERNAL_LOC     "ʹ���ڲ� Lookup ��(\<U)"
	#Define UI_OPTIONS_OPT_USE_ALTERNATE_LOC    "ʹ������ lookup ��(\<s)��"

	*--- Registry Explorer dialog:

	#Define UI_REGEXPLR_FORM_CAPTION_LOC		"���ñ�"
	#Define UI_REGEXPLR_COL_TYPE_LOC			"����"
	#Define UI_REGEXPLR_COL_CLASS_LOC			"��"
	#Define UI_REGEXPLR_COL_LIBRARY_LOC			"���"
	#Define UI_REGEXPLR_COL_DESCRIPT_LOC		"����"
	#Define UI_REGEXPLR_COL_EVENT_LOC			"�¼�"
	#Define UI_REGEXPLR_COL_OBJTYP_LOC			"��������"
	#Define UI_REGEXPLR_COL_OBJCOD_LOC			"�������"
	#Define UI_REGEXPLR_COL_NATIVE_LOC			"����"
	#Define UI_REGEXPLR_COL_DEBUG_LOC			"����"
	#Define UI_REGEXPLR_COL_FILTER_LOC			"Order"

	*--- Metadata Editor dialog:

	#Define UI_CMD_EDIT_XML_LOC					"�༭ XML..."
	#Define UI_METAEDIT_LBL_RTEXTENSION_LOC		"����ʱ��չ��"
	#Define UI_METAEDIT_LBL_EXECWHEN_LOC		"ִ��������"

	*--- FRX Browser dialog:

	#Define UI_FRXBROWS_FORM_CAPTION_LOC		"FRX �������"

	*--- Multiple selection dialog:

	#Define UI_MULTISEL_APPLY_PROTECTION_LOC	"����Щ��������Ӧ������ѡ����"
	#Define UI_MULTISEL_APPLY_PRINTWHEN_LOC		"����ʱ����Щ����Ӧ������ѡ����"

	*--- FRX Browse Panel:

	#Define UI_FRXBROWS_CHK_CURPOS_LOC			"CURPOS=.T. (�ڲ�����ѡ��Ķ���)"

	*--- Object Position Panel:

	#Define UI_OBJPOS_LBL_OBJECT_POS_LOC		" ����λ�� "
	#Define UI_OBJPOS_OPT_FLOAT_LOC				"����(\<F)"
	#Define UI_OBJPOS_OPT_FIX_REL_TO_TOP_LOC    "����ڴ��������̶�(\<t)"
	#Define UI_OBJPOS_OPT_FRX_REL_TO_BOTTOM_LOC "����ڴ����ײ��̶�(\<b)"

	*--- Stretch Down Panel:

	#Define UI_STRETCH_LBL_STRETCH_LOC			" ������չ "
	#Define UI_STRETCH_OPT_NO_STRETCH_LOC		"������(\<N)"
	#Define UI_STRETCH_OPT_REL_TO_TALLEST_LOC   "�����������߶�������(\<l)"
	#Define UI_STRETCH_OPT_REL_TO_HEIGHT_LOC    "����ڴ����߶�����(\<h)"

	*--- Absolute Positioning panel:

	#Define UI_ABSPOS_LBL_CAPTION_LOC			" �����еĴ�С��λ�� "
	#Define UI_ABSPOS_LBL_PAGE_TOP_LOC			"��ҳ�涥����"
	#Define UI_ABSPOS_LBL_LEFT_LOC				"����ߣ�"
	#Define UI_ABSPOS_LBL_HEIGHT_LOC			"�߶ȣ�"
	#Define UI_ABSPOS_LBL_WIDTH_LOC				"��ȣ�"

	*--- Band panel:

	#Define UI_BAND_LBL_HEIGHT_LOC				"�߶�(\<H)��"
	#Define UI_BAND_CHK_CONSTANT_HEIGHT_LOC		"�㶨�����߶�"
	#Define UI_BAND_LBL_RUN_EXPR_LOC			" ���б��ʽ "
	#Define UI_BAND_LBL_ONENTRY_LOC				"�ڽ���ʱ(\<e)��"
	#Define UI_BAND_LBL_ONEXIT_LOC				"���˳�ʱ(\<x)��"

	*--- Band protection panel:

	#Define UI_BANDPROT_LBL_CAPTION_LOC			" ���ܱ���ģʽ�� "
	#Define UI_BANDPROT_LBL_HELP_TEXT_LOC		"�����ܱ���ģʽ���޸Ĳ���ʱ, �������ƽ�Ӧ���ڴ˴�����"
	#Define UI_BANDPROT_CHK_NO_RESIZE_LOC		"���ܵ��������Ĵ�С"
	#Define UI_BANDPROT_CHK_NO_PROPS_LOC		"���ԶԻ��򲻿���"

	*--- Calculate panel:

	#Define UI_CALCULATE_LBL_CAPTION_LOC		" ���� "
	#Define UI_CALCULATE_LBL_TYPE_LOC			"��������:"
	#Define UI_CALCULATE_LBL_RESET_LOC			"����������������:"

	*--- Comment/User panel:

	#Define UI_COMMENTUSER_LBL_COMMENT_LOC		"ע�� "
	#Define UI_COMMENTUSER_LBL_USERDATA_LOC		"�û����� "
	#Define UI_COMMENTUSER_CMD_EDIT_COMMENT_LOC "�༭ע��..."
	#Define UI_COMMENTUSER_CMD_EDIT_USER_LOC    "�༭�û�����..."

	*--- Load DE panel:

	#Define UI_LOADDE_LBL_CAPTION_LOC			" �������ݻ��� "
	#Define UI_LOADDE_OPT_COPY_FROM_FRX_LOC		"�����������ļ�����"
	#Define UI_LOADDE_OPT_LINK_TO_CLASS_LOC		"���ӵ�һ�����ݻ�����"
	#Define UI_LOADDE_CMD_SELECT_LOC			"ѡ��..."
	#Define UI_LOADDE_LBL_CLASSNAME_LOC			"�ࣺ"
	#Define UI_LOADDE_LBL_LIBRARY_LOC			"��� / Դ��"
	#Define UI_LOADDE_CHK_PRIVATE_SESSION_LOC	"����ʹ��˽�����ݹ�����"

	*--- DesignTime Label panel:

	#Define UI_DTLABEL_LBL_CAPTION_LOC			"���ʱ����:"

	*--- Detail band properties panel:

	#Define UI_DETAIL_LBL_CAPTION_LOC			" ��ϸ������Ϣ "
	#Define UI_DETAIL_CHK_NEW_COLUMN_LOC		"�����п�ʼ(\<c)"
	#Define UI_DETAIL_CHK_NEW_PAGE_LOC			"����ҳ��ʼ(\<p)"
	#Define UI_DETAIL_CHK_RESET_PAGE_LOC		"����ÿ��ϸ�ڵ�ҳ��Ϊ 1 (\<n)"
	#Define UI_DETAIL_CHK_HEADERFOOTER_LOC      "������ͷ��ע�Ŵ���(\<h)"
	#Define UI_DETAIL_CHK_REPRINT_HEADER_LOC	"��ÿҳ�����´�ӡϸ�ڱ�ͷ(\<R)"
	#Define UI_DETAIL_LBL_THRESHOLD_LOC			"��С�ڴ�ֵʱ����ҳ��ʼϸ��(\<S)��"
	#Define UI_DETAIL_LBL_TARGET_ALIAS_LOC		"Ŀ��������ʽ(\<T)��"

	*--- Detail bands panel:

	#Define UI_DETAILBANDS_LBL_CAPTION_LOC		" ϸ�ڴ��� "

	*--- Field Expression panel:

	#Define UI_FIELDEXPR_LBL_CAPTION_LOC		"���ʽ(\<E)��"

	*--- Field Format panel:

	#Define UI_FORMAT_LBL_CAPTION_LOC			"��ʽ���ʽ(\<F)��"
	#Define UI_FORMAT_OPT_CHARACTER_LOC			"�ַ�(\<C)"
	#Define UI_FORMAT_OPT_NUMERIC_LOC			"��ֵ(\<N)"
	#Define UI_FORMAT_OPT_DATE_LOC				"����(\<D)"
	#Define UI_FORMAT_LBL_OPTIONS_LOC			" ��ʽѡ�� "

	#Define UI_FORMAT_LBL_TEMPLATE_LOC			"ģ���ַ�"
	#Define UI_FORMAT_OPT_OVERLAY_LOC			"����(\<O)"
	#Define UI_FORMAT_OPT_INTERLEAVE_LOC		"����(\<I)"
	#Define UI_FORMAT_LBL_JUSTIFY_LOC			"(�ı�)���뷽ʽ"
	#Define UI_FORMAT_OPT_JUST_LEFT_LOC			"��(\<L)"
	#Define UI_FORMAT_OPT_JUST_RIGHT_LOC		"��(\<R)"
	#Define UI_FORMAT_OPT_JUST_CENTER_LOC		"����(\<t)"
	#Define UI_FORMAT_CHK_UPPERCASE_LOC			"�ַ���д(\<u)"
	#Define UI_FORMAT_CHK_SET_DATE_LOC			"���ڸ�ʽ(\<S)"
	#Define UI_FORMAT_CHK_BRITISH_DATE_LOC		"Ӣ������(\<B)"

	#Define UI_FORMAT_CHK_LEFT_JUST_LOC			"�����(\<L)"
	#Define UI_FORMAT_CHK_ZERO_BLANK_LOC		"���Ϊ 0 ���ÿ�(\<z)"
	#Define UI_FORMAT_CHK_NEGATIVE_LOC			"(��ֵ(\<g))"
	#Define UI_FORMAT_CHK_CR_POSITIVE_LOC		"���Ϊ������� C\<R"
	#Define UI_FORMAT_CHK_DB_NEGATIVE_LOC		"���Ϊ������� DB(\<v)"
	#Define UI_FORMAT_CHK_LEADING_0_LOC			"ǰ����(\<e)"
	#Define UI_FORMAT_CHK_CURRENCY_LOC			"����(\<u)"
	#Define UI_FORMAT_CHK_SCIENTIFIC_LOC		"��ѧ������(\<t)"

	#Define UI_FORMAT_CHK_BLANK_EMPTY_LOC		"�հ� (���Ϊ��)"

	#Define UI_FORMAT_LBL_TRIM_MODE_LOC			"�ַ����ʽ���޼�ģʽ(\<T)��"

	*--- Field Positioning panel:

	#Define UI_FIELDPOS_CHK_OVERFLOW_LOC		"���ʱ��չ(\<S)"

	*--- Group Expression panel:

	#Define UI_GROUPEXPR_LBL_CAPTION_LOC		"����ʽ(\<e)��"

	*--- Grouping panel:

	#Define UI_GROUPING_LBL_NESTING_LOC			"����Ƕ��˳��"
	#Define UI_GROUPING_LBL_GROUP_ON_LOC		"�������ݣ�"
	#Define UI_GROUPING_LBL_STARTS_ON_LOC		" �鿪ʼ�� "
	#Define UI_GROUPING_OPT_NEW_LINE_LOC		"����"
	#Define UI_GROUPING_OPT_NEW_COL_LOC			"����(\<c)"
	#Define UI_GROUPING_OPT_NEW_PAGE_LOC		"��ҳ(\<p)"
	#Define UI_GROUPING_OPT_NEW_PAGE1_LOC		"��ҳ��ҳ�� 1 ��ʼ(\<N)"
	#Define UI_GROUPING_CHK_REPRINT_LOC			"��ÿ��ҳ�������´�ӡ�����(\<R)"
	#Define UI_GROUPING_LBL_THRESHOLD_LOC		"С����ֵʱ����ҳ�濪ʼ��(\<S)��"

	*--- Member data panel:

	#Define UI_MEMBERDATA_LBL_CAPTION_LOC		"����ʱ��չ "
	#Define UI_MEMBERDATA_CMD_EDIT_LOC			"�༭����..."

	*--- MultiPrint When panel:

	#Define UI_MULTIPRINTWHEN_LBL_CAPTION_LOC	"���ڱ��ʽΪ true ʱ��ӡ:(\<P)��"

	*--- MultiSelect panel:

	#Define UI_MULTISELECT_LBL_OBJECT_LOC		"����(\<O)"
	#Define UI_MULTISELECT_LBL_BAND_LOC			"����ʱ��λ��"
	#Define UI_MULTISELECT_LBL_SORT_BY_LOC		" ���� "
	#Define UI_MULTISELECT_OPT_TYPE_LOC			"����(\<T)"
	#Define UI_MULTISELECT_OPT_LOCATION_LOC		"λ��(\<L)"
	#Define UI_MULTISELECT_CMD_REMOVE_LOC		"���б��Ƴ�"

	*--- Object Protection panel:

	#Define UI_OBJPROTECT_LBL_CAPTION_LOC		" ���ڱ���ģʽʱ "
	#Define UI_OBJPROTECT_LBL_TEXT_LOC			"�����ܱ���ģʽ���޸Ĳ���ʱ, �������ƽ�Ӧ���ڴ˱���ؼ���"
	#Define UI_OBJPROTECT_CHK_NO_RESIZE_LOC		"�������ƶ��������С(\<m)"
	#Define UI_OBJPROTECT_CHK_NO_PROPS_LOC		"���ԶԻ��򲻿���(\<P)"
	#Define UI_OBJPROTECT_CHK_NO_DELETE_LOC		"����ɾ������(\<d)"
	#Define UI_OBJPROTECT_CHK_NO_SELECT_LOC		"����ѡ�����(\<s)"
	#Define UI_OBJPROTECT_CHK_NOT_VISIBLE_LOC	"������������в��ɼ�(\<v)"

	*--- Optional Bands panel:

	#Define UI_OPTBANDS_LBL_TITLE_LOC			" ���� "
	#Define UI_OPTBANDS_CHK_TITLE_LOC			"������б������(\<t)"
	#Define UI_OPTBANDS_CHK_TITLE_NEW_PAGE_LOC	"��ӡ�����ҳ(\<N)"
	#Define UI_OPTBANDS_LBL_SUMMARY_LOC			" ��Ҫ "
	#Define UI_OPTBANDS_CHK_SUMMARY_LOC			"������и�Ҫ����(\<m)"
	#Define UI_OPTBANDS_CHK_SUMM_NEW_PAGE_LOC	"����ҳ��ӡ��Ҫ(\<w)"
	#Define UI_OPTBANDS_CHK_SUMM_HEADER_LOC		"�ڸ�Ҫ�а���ҳ��ͷ(\<h)"
	#Define UI_OPTBANDS_CHK_SUMM_FOOTER_LOC		"�ڸ�Ҫ�а���ҳע��(\<f)"

	*--- Page Layout panel:

	#Define UI_PAGELAYOUT_LBL_COLUMNS_LOC		" �� "
	#Define UI_PAGELAYOUT_LBL_NUMBER_LOC		"������"
	#Define UI_PAGELAYOUT_LBL_WIDTH_LOC			"��ȣ�"
	#Define UI_PAGELAYOUT_LBL_SPACING_LOC		"�ռ䣺"
	#Define UI_PAGELAYOUT_LBL_MARGIN_LOC		"��߾ࣺ"

	#Define UI_PAGELAYOUT_LBL_PRINT_AREA_LOC	" ��ӡ���� "
	#Define UI_PAGELAYOUT_OPT_PRINTABLE_LOC		"��ӡҳ��"
	#Define UI_PAGELAYOUT_OPT_WHOLE_LOC			"��ӡ��ҳ"

	#Define UI_PAGELAYOUT_LBL_PRINT_ORDER_LOC	" �д�ӡ˳�� "
	#Define UI_PAGELAYOUT_OPT_TOP_BOTTOM_LOC	"���ϵ���"
	#Define UI_PAGELAYOUT_OPT_LEFT_RIGHT_LOC	"��������"

	#Define UI_PAGELAYOUT_LBL_DEF_FONT_LOC		" Ĭ������ "
	#Define UI_PAGELAYOUT_CHK_FONTSCRIPT_LOC	"ʹ������ű�"

	#Define UI_PAGELAYOUT_LBL_PRINTER_LOC		" ��ӡ�� "
	#Define UI_PAGELAYOUT_CMD_PAGE_SETUP_LOC	"ҳ������..."
	#Define UI_PAGELAYOUT_CHK_SAVE_ENV_LOC		"�����ӡ������"

	*--- Picture/Bound panel:

	#Define UI_PICTBOUND_LBL_CAPTION_LOC		" �ؼ�Դ���� "
	#Define UI_PICTBOUND_OPT_FILE_LOC			"ͼ���ļ���"
	#Define UI_PICTBOUND_OPT_GENERAL_LOC		"ͨ���ֶ���"
	#Define UI_PICTBOUND_OPT_EXPRVAR_LOC		"���ʽ�������"
	#Define UI_PICTBOUND_LBL_SOURCE_LOC			"�ؼ�Դ��"
	#Define UI_PICTBOUND_LBL_PICTMODE_LOC		"���Դ�Ϳ�ܴ�С��ͬ��"
	#Define UI_PICTBOUND_CHK_CENTER_LOC			"�ڿ����ˮƽ����ͨ���ֶ�"

	*--- Print When panel:

	#Define UI_PRINTWHEN_LBL_CAPTION_LOC		" ��ӡ�ظ�ֵ "
	#Define UI_PRINTWHEN_OPT_YES_LOC			"��(\<Y)"
	#Define UI_PRINTWHEN_OPT_NO_LOC				"��(\<N)"
	#Define UI_PRINTWHEN_LBL_ALSO_PRINT_LOC		" ͬʱ��ӡ "
	#Define UI_PRINTWHEN_CHK_FIRST_WHOLE_LOC	"����ҳ/�еĵ�һ����������(\<f)"
	#Define UI_PRINTWHEN_CHK_EXPR_CHANGE_LOC	"�������ݷ�����ʽ�ı�ʱ(\<g):"
	#Define UI_PRINTWHEN_CHK_OVERFLOW_LOC		"��ϸ�ڴ����������ҳ/��ʱ(\<b)"
	#Define UI_PRINTWHEN_CHK_REMOVE_BLANK_LOC	"�Ƴ�����(\<R)"
	#Define UI_PRINTWHEN_LBL_PRINT_EXPR_LOC		"�����ʽΪ��ʱ��ӡ(\<P)��"

	*--- Report Protection panel:

	#Define UI_REPPROTECT_LBL_CAPTION_LOC		" ���ڱ���ģʽʱ "
	#Define UI_REPPROTECT_LBL_TEXT_LOC			"ѡ�����ܱ���ģʽ���޸Ĵ˲���ʱ�������õĹ���:"
	#Define UI_REPPROTECT_CHK_NO_PRINT_LOC		"���������л��ӡ(\<p)"
	#Define UI_REPPROTECT_CHK_NO_PREVIEW_LOC	"����Ԥ������(\<w)"
	#Define UI_REPPROTECT_CHK_NO_DATAENV_LOC	"���ݻ���������"
	#Define UI_REPPROTECT_CHK_NO_PAGELAYOUT_LOC "ҳ�沼�ֲ�����(\<L)"
	#Define UI_REPPROTECT_CHK_NO_OPTBANDS_LOC	"���ܸ��Ĵ���ѡ��(\<O)"
	#Define UI_REPPROTECT_CHK_NO_GROUPING_LOC	"���ܱ༭���ݷ���(\<G)"
	#Define UI_REPPROTECT_CHK_NO_REPVARS_LOC	"���ܱ༭�������(\<V)"

	*--- Ruler/Grid panel:

	#Define UI_RULERGRID_LBL_RULER_LOC			" ��� "
	#Define UI_RULERGRID_LBL_UNITS_LOC			"��λ��"
	#Define UI_RULERGRID_CHK_SHOW_POSITION_LOC	"��״̬������ʾλ��"
	#Define UI_RULERGRID_LBL_GRID_LOC			" ��� "
	#Define UI_RULERGRID_CHK_SHOW_GRID_LOC		"��ʾ�����"
	#Define UI_RULERGRID_CHK_SNAP_TO_GRID_LOC	"��������"
	#Define UI_RULERGRID_LBL_HORIZONTAL_LOC		"ˮƽ��ࣺ"
	#Define UI_RULERGRID_LBL_VERTICAL_LOC		"��ֱ��ࣺ"

	*--- Report Variables panel:

	#Define UI_REPVARS_LBL_CAPTION_LOC			"������"
	#Define UI_REPVARS_LBL_STORE_VALUE_LOC		"Ҫ�洢��ֵ��"
	#Define UI_REPVARS_LBL_INITIAL_LOC			"��ʼֵ��"
	#Define UI_REPVARS_LBL_RESET_ON_LOC			"����������������ֵ:"
	#Define UI_REPVARS_LBL_CALC_TYPE_LOC		"��������:"
	#Define UI_REPVARS_CHK_RELEASE_LOC			"����������ͷ�"

	*--- Shape format panel:
	*--- Text format panel:

	#Define UI_SHAPE_LBL_STYLE_LOC				"��ʽ��"
	#Define UI_SHAPE_LBL_WEIGHT_LOC				"��ϸ��"
	#Define UI_SHAPE_LBL_CURVATURE_LOC			"���ʣ�"
	#Define UI_SHAPE_LBL_COLOR_LOC				" ��ɫ "

	#Define UI_TEXTFORMAT_LBL_FONT_LOC			" ���� "
	#Define UI_TEXTFORMAT_CHK_FONTSCRIPT_LOC	"ʹ������ű�"
	#Define UI_TEXTFORMAT_CHK_STRIKETHRU_LOC	"ɾ����"
	#Define UI_TEXTFORMAT_CHK_UNDERLINE_LOC		"�»���"

	#Define UI_FORMAT_CHK_FORECOLOR_LOC			"ʹ��Ĭ��ǰ�� (����) ��ɫ"
	#Define UI_FORMAT_CHK_BACKCOLOR_LOC			"ʹ��Ĭ�ϱ��� (���) ��ɫ"
	#Define UI_FORMAT_LBL_BACKSTYLE_LOC			" ������ʽ "
	#Define UI_FORMAT_OPT_OPAQUE_LOC			"��͸��"
	#Define UI_FORMAT_OPT_TRANSPARENT_LOC		"͸��"
	#Define UI_FORMAT_LBL_SAMPLE_LOC			" ʾ�� "

	*--- Text Label panel:

	#Define UI_TEXTLABEL_LBL_CAPTION_LOC		"���⣺"

	*--- Tooltip panel:

	#Define UI_TOOLTIP_LBL_CAPTION_LOC			"��ʾ "
	#Define UI_TOOLTIP_CMD_EDIT_LOC				"�༭��ʾ..."

	*=======================================================
	* Additional constants added for SP1:
	*=======================================================

	*----------------------------------------
	* See frxDeLoader in frxUtils.prg

	#Define LOAD_DE_ERR_ADAPTERSCHEMA			"���п�CursorSchema���Ե�CursorAdapter��������ӵ����ݻ����С�"

	*----------------------------------------
	* See frxEvent in frxBuilder.vcx

	#Define RB_ERROR_API_NOT_SUPPORTED_LOC      "�� '{0}' ��֧��Ԥ�ڵ� API��"

	*----------------------------------------
	* See panelReportVars in frxpanels.vcx

	#Define REPORT_VAR_INVALID_INITIAL_VALUE_LOC	"���� '{0}' �� '��ʼֵ' ��Ч��"
	#Define REPORT_VAR_INVALID_STORE_VALUE_LOC		"���� '{0}' �� '�洢ֵ' ��Ч��"

	*----------------------------------------
	* See panelde in frxpanels.vcx

	#Define UI_LOADDE_CHK_USE_FULL_PATH_LOC    "ʹ������·��"

	*----------------------------------------
	* See panelFieldFormat in frxpanels.vcx

	#Define UI_FORMAT_CHK_USE_LONG_DATE_LOC		"ʹ�ó����ڸ�ʽ(\<l)"
	#Define UI_FORMAT_CHK_USE_SHORT_DATE_LOC	"ʹ�ö����ڸ�ʽ(\<s)"

	*----------------------------------------
	* See debugHandler in frxBuilder.vcx

	#Define UI_DEBUG_CHK_FLAG_REFRESH       "�� FRX �α�ˢ�±�����"
	#Define UI_DEBUG_CHK_FLAG_NODEFAULT     "ȡ�������¼���Ϊ (NODEFAULT)"
	#Define UI_DEBUG_CMD_CONTINUE           "����"
	#Define UI_DEBUG_CMD_OPTIONS            "ѡ��..."
	#Define UI_DEBUG_CMD_DETAILS            "�¼���ϸ��Ϣ..."

	*----------------------------------------
	* See GetExprWrapper in frxhandlers.prg:

	#Define GETEXPR_LABEL_CAPTION_LOC    "��ǩ������ı�"
	#Define GETEXPR_PRINT_WHEN_LOC       "�� <expr> Ϊ .T. ʱ��ӡ����"
	#Define GETEXPR_FIELD_EXPR_LOC       "�������ֶεı��ʽ"
	#Define GETEXPR_OLEB_FIELD_LOC       "���� OLE/�󶨿ؼ���ͨ���ֶ�"
	#Define GETEXPR_OLEB_EXPR_LOC        "OLE/�󶨿ؼ��ı��ʽ"
	#Define GETEXPR_GROUP_ON_LOC         "���ݱ��ʽ <expr> �����¼"
	#Define GETEXPR_VALUE_TO_STORE_LOC   "Ҫ�洢�ڱ����е�ֵ"
	#Define GETEXPR_INITIAL_VALUE_LOC    "�����ĳ�ʼֵ"
	#Define GETEXPR_BAND_ON_ENTRY_LOC    "������ڱ��ʽ"
	#Define GETEXPR_BAND_ON_EXIT_LOC     "�������ڱ��ʽ"
	#Define GETEXPR_TARGET_ALIAS_LOC     "ϸ�ڴ�����Ŀ��������ʽ"

	*=======================================================
	* Additional constants added for SP2:
	*=======================================================

	#Define DRAFT_MODE_PREVIEW_WARNING_LOC			"SET REPORTBEHAVIOR ������Ϊ 80. �ݸ�ģʽԤ�����ܲ���ʾ��̬��Ϊ��"

	#Define TEXTFORMAT_PREVIEW_DEFAULT_TEXT_LOC		"����֤��"

	*--- FRX Browser dialog:

	#Define FRXBROWS_MEMO_EDIT_HELPER_TXT_LOC		"ֱ�ӱ༭�ֶ�����ʱҪС�ġ�"

	*--- Text Format Panel:

	#Define UI_FORMAT_OPT_ALPHA_LOC             "ָ�� Alpha ͨ��"
	#Define UI_FORMAT_ALPHA_PEN_LOC				"���ʣ�"
	#Define UI_FORMAT_ALPHA_FILL_LOC			"��䣺"
	#Define UI_FORMAT_LBL_ALPHA_LOC             " Alpha "

	*--- Registry Explorer dialog:

	#Define UI_REGEXPLR_FORM_INTERNAL_LOC		"(�ڲ� lookup ��)"

	#Define UI_REGEXPLR_FILTER_ENU_ALL           "��ʾ����"
	#Define UI_REGEXPLR_FILTER_ENU_HANDLERS      "����ʾ�¼��������"
	#Define UI_REGEXPLR_FILTER_ENU_FILTERS       "����ʾ�¼�ɸѡ��"
	#Define UI_REGEXPLR_FILTER_ENU_EXIT          "����ʾ�˳��������"
	#Define UI_REGEXPLR_FILTER_ENU_DIALOGS       "����ʾ�����õ��û�����"
	#Define UI_REGEXPLR_FILTER_ENU_PROPERTIES    "����ʾ�߼����Զ���"

	#Define UI_REGEXPLR_COL_PROPNAME_LOC        "������"
	#Define UI_REGEXPLR_COL_PROPVALUE_LOC       "Ĭ��ֵ"
	#Define UI_REGEXPLR_COL_PROPTYPE_LOC        "�༭����"
	#Define UI_REGEXPLR_COL_PROPHIDDEN_LOC      "����"

	#Define UI_REGEXPLR_CMD_IMPORT              "����"

	#Define REGEXPLR_EVTYP_HELP_TITLE_LOC		"�¼����͵�ֵ��"
	#Define REGEXPLR_EVTYP_WILD_CARD_LOC		"(�κ��������¼�)"
	#Define REGEXPLR_TARGET_ANY_OBJCODE_LOC		"(�κζ�������ֵ)"
	#Define REGEXPLR_TARGET_ANY_OBJTYPE_LOC		"(�κζ������͵�ֵ)"
	#Define REGEXPLR_TARGET_LAYOUT_ELEMENT_LOC	"������Ԫ��"

	#Define REGEXPLR_OBJTYPE_HELP_TITLE_LOC		"�������͵�ֵ��"
	#Define REGEXPLR_OBJCODE_HELP_TITLE_LOC		"��������ֵ��"
	#Define REGEXPLR_PROPDEF_HELP_TITLE_LOC		"���Ա༭���ͣ�"
	#Define REGEXPLR_RECTYPE_HELP_TITLE_LOC     "��¼���ͣ�"

	#Define REGEXPLR_RECTYPE_EXITHANDLER_LOC	"�˳��������"
	#Define REGEXPLR_RECTYPE_HANDLER_LOC	    "�¼��������"
	#Define REGEXPLR_RECTYPE_GETEXPR_LOC	    "GETEXPR ��װ��"
	#Define REGEXPLR_RECTYPE_EVENTFILTER_LOC	"�¼�ɸѡ��"
	#Define REGEXPLR_RECTYPE_EXTENDEDIT_LOC	    "����ʱ��չ�༭��"
	#Define REGEXPLR_RECTYPE_MULTITAB_LOC	    "��ѡ��������еĸ���ҳ"
	#Define REGEXPLR_RECTYPE_EXTRATAB_LOC	    "�¼���������еĸ���ҳ"
	#Define REGEXPLR_RECTYPE_REGEDIT_LOC	    "������ע���༭��"
	#Define REGEXPLR_RECTYPE_FRXBROWSE_LOC	    "FRX �����"
	#Define REGEXPLR_RECTYPE_METABROWSER_LOC	"��Ա���������"
	#Define REGEXPLR_RECTYPE_PROPERTYDEF_LOC	"�߼����Զ���"
	#Define REGEXPLR_RECTYPE_MULTIPROPDEF_LOC   "����ѡ�����Զ���"

	*--- ReportBuilder NewRegisteredObject() error text:
	#Define UI_NEWREGOBJ_CLASS_LOC			"�ࣻ"
	#Define UI_NEWREGOBJ_LIBRARY_LOC		"�⣺"
	#Define UI_NEWREGOBJ_REGTABLE_LOC		"ע���"

	*--- ReportBuilder Options dialog:

	#Define SETUP_CHK_SCREEN_SETTING_LOC	"���_screen.Report Builder Data.Get��'registry'���Խ��лỰ�־������ã�"
	#Define SETUP_CHK_CONFIG_SETTING_LOC	"��� CONFIG.FPW �Ƿ��� REPORTBUILDER_REGISTRY ���ã�"
	#Define SETUP_CHK_HOMEDIR_DBF_LOC		"�����Ŀ¼�е� 'reportbuilder.dbf':"
	#Define SETUP_CHK_PATHDIR_DBF_LOC		"��鵱ǰ·���е� 'reportbuilder.dbf':"
	#Define SETUP_CHK_ASKUSER_DBF_LOC		"Ҫ���û������ļ���"
	#Define SETUP_CHK_RESULT_EMPTY_LOC		"<��>"
	#Define SETUP_CHK_RESULT_INVALID_LOC	"<��Ч>"
	#Define SETUP_CHK_RESULT_FOUND_LOC		"�ҵ���"
	#Define SETUP_USING_RESULT_LOC			"ʹ���� "
	#Define SETUP_USING_INTERNAL_LOC		"�ڲ� lookup ��"

	#Define USE_COPY_AS_DEFAULT_REGISTRY_LOC "�Ƿ�Ҫ���˸���������ǰ���ñ�"

	#Define UI_REGISTRY_SEARCH_LOG_LINK_LOC		"��ע����λ����Σ�"
	*#define UI_REGISTRY_LOG_UNAVAILABLE_LOC     "(������)"
	*#define UI_REGISTRY_LOG_EMPTYVALUE_LOC      "(��)"
	*#define UI_REGISTRY_LOG_FOUND_LOC           "(�ҵ�)"
	*#define UI_REGISTRY_LOG_USEINTERNAL_LOC     "(ʹ���ڲ� lookup ��)"

	*--- Report Header "Other" tab:

	#Define UI_TAB_HDR_OTHER_LOC 				"����"

	*-- Advanced Tab:

	#Define UI_TAB_ADVANCED_LOC					"�߼�"

	*--- Document Properties tab:

	#Define UI_TAB_DOCUMENT_PROPERTIES_LOC		 "�ĵ�����"

	#Define UI_ADVPROP_ADD_DLG_CAPTION_LOC       "��������"
	#Define UI_ADVPROP_DEL_DLG_CAPTION_LOC       "ɾ������"
	#Define UI_ADVPROP_EDT_DLG_CAPTION_LOC       "�༭����"

	#Define ADVPROP_EDITMODE_GETEXPR_LOC		'���ʽ'
	#Define ADVPROP_EDITMODE_TEXT_LOC			'�ı�/XML'
	#Define ADVPROP_EDITMODE_STRING_LOC			'�ַ���'
	#Define ADVPROP_EDITMODE_GETFILE_LOC		'�ļ�'
	#Define ADVPROP_EDITMODE_BOOLEAN_LOC		'�ǻ��'
	#Define ADVPROP_EDITMODE_DATE_LOC			'����'

	#Define ADVPROP_BOOLEAN_YES_LOC				"��"
	#Define ADVPROP_BOOLEAN_NO_LOC				"��"

	#Define ADVPROP_ALREADY_DEFINED_LOC         "'{0}' �Ѿ������塣ʹ����������������"
	#Define ADVPROP_DELETE_ARE_YOU_SURE_LOC     "��ȷ��Ҫ��� '{0}' ��"
	#Define ADVPROP_EDIT_HELPER_TXT_LOC			"�����ĵ����Ե��ַ���ֵ��ĳЩ���Դ�����������Ҫ��ʽ���õ� XML ����������ֵ��"

	#Define UI_ADVPROP_NAME_LOC                  "��������"
	#Define UI_ADVPROP_VALUE_LOC                 "ֵ��"
	#Define UI_ADVPROP_TYPE_LOC                  "���ͣ�"

	#Define UI_CMD_CLEAR_LOC					"����"

	*--- Dynamics Tab:

	#Define UI_CMD_SCRIPT_LOC					"�ű�"

	#Define UI_SCRIPTPREVIEW_TITLE_LOC			"��̬�ű�Ԥ��"
	#Define SCRIPTPREVIEW_HELPERTEXT_LOC		"���ǽ��ڱ�������ʱʹ���Զ�̬���ֱ���Ԫ�صĴ����Ԥ�����˴��������κθ��Ķ����ᱻ���档"

	#Define UI_DYNAMICS_CONDITIONS_LOC			"������"
	#Define UI_DYNAMICS_DEFAULT_LOC			    "<Ĭ��>"

	#Define DYNAMICS_HELPER_TEXT_LOC			"��̬��ʽ���������˴���ʾ��˳����м��㡣"

	#Define DYNAMICS_HELPER_TEXT2_LOC			"�� '�ű�' ��ť��Ԥ����Ҫʹ�õĴ��롣"

	#Define DYNAMICS_HELPER_TEXT3_LOC			"ע��: �������������������, �˴����������н����ᷴӳ�µ�˳��, ֱ����ͨ���˳� '����' �Ի��򱣴����Ϊֹ��"

	#Define DYNAMICS_HELPER_TEXT4_LOC			"��Ⱥ͸߶ȱ��ʽ�������Ϊ��λΪ1/960 Ӣ���ֵ��ֵ-1 ��������Ϊ��ǰ��Ĭ��ֵ��"

	#Define DYNAMICS_HELPER_TEXT5_LOC			"����ֵ����Ч�� (��Χ: 0 ��" + Transform(FRX_RUNTIME_LAYOUT_DIMENSION_LIMIT) + ") ��������ʱǿ�ƽ���������"

	#Define DYNAMICS_STORAGE_ERROR_LOC			"��Ա���ݽṹ�ṹ��û���㹻�Ŀռ����洢��̬��Ϣ��"

	#Define DYNAMICS_DELETE_ARE_YOU_SURE_LOC   "��ȷ��Ҫɾ�� '{0}' ��"
	#Define DYNAMICS_NEW_COND_PROMPT_LOC       "�����������ƣ�"
	#Define DYNAMICS_NEW_COND_TITLE_LOC        "��Ӷ�̬��ʽ����"
	#Define DYNAMICS_COND_EXISTS_LOC           "�Ѵ��ھ��и����Ƶ��������볢���������ơ�"

	#Define UI_TAB_EVALUATECONTENTS_LOC			"��̬"

	#Define UI_DYNAMICS_NAME_LOC				"�������ƣ�"
	#Define UI_DYNAMICS_TEXT_LOC                " �ı� "
	#Define UI_DYNAMICS_EXPR_LOC				"��������Ϊ true ʱӦ�ã�"
	#Define UI_DYNAMICS_OVERRIDE_LOC			"�����ʽ����滻Ϊ:"
	#Define UI_DYNAMICS_DLG_CAPTION_LOC			"���ö�̬����"

	#Define UI_DYNAMICS_WIDTH_LOC 				"��ȱ��ʽ��"
	#Define UI_DYNAMICS_HEIGHT_LOC 				"�߶ȱ��ʽ��"

	*--- Multiple-selection propertys:

	#Define UI_MULTIPROPS_TITLE_LOC				"���Ӧ����Щ����Ӧ������ѡԪ�أ�"
	#Define UI_MULTIPROPS_PROPERTY_HEADER_LOC	" ����"
	#Define UI_MULTIPROPS_VALUE_HEADER_LOC		" ֵ"


	*--- Object Rotation Panel:

	#Define UI_OBJECT_ROTATION_LOC				" ������ת "

	*--- Miscellaneous or common:

	#Define UI_CMD_EDIT_LOC                     "�༭"
	#Define UI_CMD_CODE_ZOOM_LOC				"��������"

	*--- Handler form context menu:

	#Define UI_CONTEXT_MEMBERDATA_LOC			"�����Ա����"
	#Define UI_CONTEXT_BROWSE_MEMBER_LOC		"���..."
	#Define UI_CONTEXT_EDIT_MEMBER_XML_LOC		"�༭ XML..."

	*--- Metadata Browser form:

	#Define UI_METABROWSE_FORM_CAPTION_LOC      "��Ա���ݼ����"

	*--- SetupUtility class:

	#Define LOCATE_REGISTRY_MANUALLY_MSG_LOC	"�޷��Զ���λ����������ע������붨λ����"
#Else
	*-------------------------------------------------------
	* UI control captions (not already LOC'd) :

	* see a comment below with the above line
	* to see how to turn on LOC'ing all interface
	* elements
	*-------------------------------------------------------

	*=======================================================
	* Report Builder localization constants
	*=======================================================
	* (For localization - see also: frxcursor.h)

	#Define c_CR	Chr(13)
	#Define c_LF    Chr(10)
	#Define c_CRLF  Chr(13)+Chr(10)
	#Define c_CR2	Chr(13)+Chr(13)
	#Define c_TAB	Chr(9)

	*=======================================================
	* Constants defined for original VFP9 RTM release:
	*=======================================================

	*-------------------------------------------------------
	* Event Types
	*-------------------------------------------------------
	#Define EVTYP_RIGHTCLICK_LOC		"(reserved)"
	#Define EVTYP_PROPERTIES_LOC		"Properties dialog"
	#Define EVTYP_OBJECT_CREATE_LOC		"Object Create"
	#Define EVTYP_OBJECT_CHANGE_LOC		"Object Change"
	#Define EVTYP_OBJECT_REMOVE_LOC		"Object Remove"
	#Define EVTYP_OBJECT_PASTE_LOC		"Object Paste"
	#Define EVTYP_REPORT_SAVE_LOC       "Report Save"
	#Define EVTYP_REPORT_OPEN_LOC		"Report Open"
	#Define EVTYP_REPORT_CLOSE_LOC		"Report Close"
	#Define EVTYP_DATAENV_LOC			"Open DataEnvironment"
	#Define EVTYP_PRINT_PREVIEW_LOC		"Print Preview Mode"
	#Define EVTYP_OPTIONAL_BANDS_LOC	"Optional Bands dialog"
	#Define EVTYP_DATA_GROUPING_LOC		"Data Grouping dialog"
	#Define EVTYP_VARIABLES_LOC			"Variables dialog"
	#Define EVTYP_EDIT_IN_PLACE_LOC     "Edit Label Text"
	#Define EVTYP_OBJECT_DROP_LOC       "Object Drop from DE"
	#Define EVTYP_SET_GRID_SCALE_LOC    "Set Grid Scale"
	#Define EVTYP_IMPORT_DE_LOC         "Load Data Environment"
	#Define EVTYP_PRINT_LOC             "Print Report"
	#Define EVTYP_QUICKREPORT_LOC       "Quick Report"
	#Define EVTYP_UNKNOWN_LOC			"UNKNOWN EVENT"

	*-------------------------------------------------------
	* Dialog Captions:
	*-------------------------------------------------------

	*#define DLG_TITLE_NEW_PREFIX_LOC		"New "
	#Define DLG_TITLE_NEW_PREFIX_LOC		""
	#Define DLG_TITLE_PROPERTIES_LOC		" Properties"
	#Define DLG_TITLE_BAND_LOC				" Band"
	#Define DLG_TITLE_READONLY_SUFFIX_LOC	" [Read Only]"

	*-------------------------------------------------------
	* Dialog context menu prompts:
	*-------------------------------------------------------

	#Define UI_CONTEXT_EVENT_INSPECTOR_LOC	"Event Inspector..."
	#Define UI_CONTEXT_BROWSE_FRX_LOC		"Browse FRX..."
	#Define UI_CONTEXT_OPTIONS_DIALOG_LOC  	"Options..."
	#Define UI_TOOLSMENU_OPTIONS_MESSAGE_LOC "Displays the default report builder Options dialog box"

	*-------------------------------------------------------
	* Message box strings:
	*-------------------------------------------------------

	#Define DEFAULT_MBOX_TITLE_LOC          	"Report Builder"
	#Define RB_INVALID_PARAMETERS_LOC		    "Report Builder has been called with invalid parameters."
	#Define RB_FILE_NOT_FOUND_LOC			    "The specified report file could not be opened."
	#Define EVENT_INSPECTOR_TITLE_LOC           "Report Builder Event"
	#Define RB_GETEXPR_FAILURE_LOC              "The GetExpression handler is not available. INPUTBOX() will be used instead."
	#Define RB_DEF_GETEXPR_PROMPT_LOC           "Enter expression:"

	#Define RB_EXCEPTION_HEADER_LOC             "The report builder application has encountered an exception from which it could not recover:"
	#Define RB_ERROR_NEWOBJECT_LOC              "The report builder application was unable to instantiate the following class:"
	#Define RB_ERROR_CHECK_REGISTRY_LOC         "Please ensure that the registry table is correctly configured."

	#Define DEVICEHELPER_ERROR_LOC				"Unable to read page layout information from report printer environment."+ Chr(13) + "Error: "
	#Define NO_PRINTERS_INSTALLED_LOC			"There are no printers installed. Page Layout settings may not be available."
	#Define PRINTER_INSTALLED_OK_LOC			"Thank you for installing a printer. Page Layout options for this report can now be set."

	#Define RUNTIME_EXT_XML_HELPER_TXT_LOC		"Edit the XML directly but be careful to maintain the valid XML format. WARNING: Portions of the XML may be re-written by the builder when the dialog box is closed."
	#Define RUNTIME_EXT_NO_FRX_LOC				"The FRX cursor is not specified or not available. Report metadata can not be edited."

	#Define UNABLE_TO_COPY_REGISTRY_LOC         "Unable to create copy of registry table."
	#Define OVERWRITE_EXISTING_REGISTRY_LOC     "Overwrite existing registry table?"
	#Define FILE_EXISTS_LOC					    "File Exists:"
	#Define REGISTRY_TABLE_LOC				    "Registry Table:"

	#Define FEATURE_IS_PROTECTED_LOC		    "This function is not available in the Report Designer's protected mode."
	#Define OBJECT_LOCK_LOC             	    "This object may not be moved."
	#Define DELETE_MBOX_TITLE_LOC			    "Object Delete"
	#Define DELETE_MBOX_MSG_LOC        		    "{%1} object(s) are protected from delete operations."
	#Define OBJECT_NO_EDIT_LOC          	    "This object may not be edited."

	#Define GROUPED_ITEM_PROPERTIES_LOC		    "These items are grouped. To edit the properties of the individual layout elements, you must first un-group them using the Format menu."

	#Define TEXTLABEL_INVALID_CAPTION_MSG_LOC	"You must enter a Label Caption."
	#Define FIELDEXPR_INVALID_CAPTION_MSG_LOC   "You must enter a field expression."
	#Define PICTURE_INVALID_SOURCE_MSG_LOC      "You must enter a picture source."
	#Define PICTURE_INVALID_FILENAME_MSG_LOC	"Unable to locate the source file. Please select a valid picture source."

	#Define PROPEDIT_MBOX_TITLE_LOC			    "Unable to save"
	#Define USE_REG_ERR_MBOX_MSG_LOC		    "Unable to open handler registry table {%1}. The default, internal lookup table will be used."

	#Define PRINTER_NAME_SUFFIX_DEFAULT_LOC	    " (Default)"

	#Define METADATA_DOM_CREATE_FAILED_LOC 	    "Unable to create MSXml.DomDocument instance. Metadata XML may not be available."
	#Define METADATA_XML_INVALID_LOC		    "The metadata XML for this report element is not valid."
	*#define METADATA_XML_REPLACE_LOC			*** MOVED TO _frxcursor.h

	#Define BAND_REMOVE_WARNING_LOC			    "{%1} object(s) exist in the {%2} band(s)."+c_CR+"If they stay in the report, their position in the report layout"+c_CR+"will be unpredictable when these bands are removed."+c_CR2+"Do you wish to delete these objects as well?"+c_CR2+"Yes"+c_TAB+"- to DELETE objects currently in the bands."+c_CR+"No"+c_TAB+"- to leave the objects in the report layout."+c_CR+"Cancel"+c_TAB+"- to return to the dialog without deleting anything."

	#Define DETAIL_BAND_REMOVE_WARN_LOC		    "{%1} object(s) exist in this detail band."+c_CR+"Are you sure you want to remove this band, along with the layout objects?"
	#Define GROUP_BAND_REMOVE_WARN_LOC		    "{%1} object(s) exist in this group's header and footer."+c_CR+"Are you sure you want to remove this data grouping, along with the layout objects?"

	#Define QUERY_SUSPEND_EXECUTION_LOC 	    "Do you want to suspend execution?"

	#Define EDIT_REPORT_VAR_PROMPT_LOC		    "Variable name:"
	#Define EDIT_REPORT_VAR_CAPTION_LOC		    "Report Variable"

	#Define LOAD_DE_CONFIRMATION_LOC			"This will replace existing Data Environment information in this report. Do you want to continue?"
	#Define LOAD_DE_ERROR_LOC					"An error occurred attempting to read the source report."
	#Define LOAD_DE_INVALID_CLASS_LOC       	"A class of base class 'DataEnvironment' must be selected."
	#Define LOAD_DE_ERR_INSTANTIATING_CLASS_LOC	"An error ocurred while attempting to instantiate the DE class and therefore it could not be linked to the report."
	#Define DE_METHOD_HEADER_COMMENT_LOC		"* THIS METHOD CODE WAS INSERTED BY THE REPORT BUILDER *"
	#Define LOAD_DE_SUCCESS_LOC					"The data environment for this report will be updated when you click OK to save your changes."

	#Define OTHER_EDIT_COMMENT_LOC			"Comments are stored in the COMMENTS field of the report(.frx) file and are not used by the report engine."

	#Define OTHER_EDIT_USER_LOC					"User data is stored in the USER field of the report(.frx) file and is not used by the report engine."

	#Define OTHER_EDIT_TOOLTIP_LOC				"Tooltips are displayed for layout objects in the Report Designer."

	#Define OTHER_EDIT_METADATA_LOC 			"Run-time extensions specify code elements visible to ReportListener objects at run time."

	#Define METADATA_HELPER_TEXT_LOC			"Run-time extensions specify code elements visible to ReportListener objects. Execute when specifies an expression that ReportListener objects can evaluate to determine whether to run the extensions."

	#Define EDIT_SCRIPT_DLG_CAPTION_LOC			"Edit Runtime Script"
	#Define EDIT_META_XML_DLG_CAPTION_LOC		"Metadata XML"

	#Define LABEL_EDIT_CAPTION_LOC              "Label Caption"
	#Define LABEL_EDIT_COMMENT_LOC				"A label's caption may not exceed 254 characters in length. Additional characters will be ignored."
	#Define REPORT_VAR_INVALID_NAME_LOC			"Please specify a valid variable name."

	#Define REPORT_VAR_DUPLICATE_NAME_LOC       "Please specify a unique variable name."

	#Define OPTIONS_DEFAULT_INTERNAL_LOOKUP_LOC		"internal lookup table"
	#Define OPTIONS_HANDLER_REGISTRY_PROMPT_LOC		"Handler registry:"
	#Define OPTIONS_GETFILE_REGISTRY_TITLE_LOC		"Select event handler registry table"
	#Define OPTIONS_HANDLER_REGISTRY_INVALID_LOC	"The specified table does not exist or is invalid."

	#Define DTL_HELPER_TEXT_LOC  					"During PROTECTED report designer sessions, design-time captions are displayed in the layout instead of the field expression."

	#Define OLEBOUND_DPI_HELPERTEXT_LOC				"You can tune the performance of a report with OLEBound objects by adjusting the DPI used to render them."

	*-------------------------------------------------------
	* Page Layout Preview Control:
	*-------------------------------------------------------

	#Define PAGELAYOUT_FORM_CAPTION_LOC				"Page Layout Details"

	#Define PAGELAYOUT_INFO_PAGE_WIDTH_LOC			"Page Width = "
	#Define PAGELAYOUT_INFO_PAGE_HEIGHT_LOC			"Page Height = "
	#Define PAGELAYOUT_INFO_ORIENTATION_LOC			"Orientation = "
	#Define PAGELAYOUT_INFO_UNPRINT_TOP_LOC			"Unprintable Top margin = "
	#Define PAGELAYOUT_INFO_UNPRINT_LEFT_LOC		"Unprintable Left margin = "
	#Define PAGELAYOUT_INFO_EXTRA_LEFT_LOC			"Additional Left margin = "
	#Define PAGELAYOUT_INFO_COL_COUNT_LOC			"Column Count = "
	#Define PAGELAYOUT_INFO_COL_WIDTH_LOC			"Column Width = "
	#Define PAGELAYOUT_INFO_COL_SPACE_LOC			"Column Space = "
	#Define PAGELAYOUT_INFO_HEADER_SIZE_LOC			"Header size = "
	#Define PAGELAYOUT_INFO_FOOTER_SIZE_LOC			"Footer size = "

	*-------------------------------------------------------
	* Calculation combo list:
	*-------------------------------------------------------

	#Define CALCULATE_NOTHING_LOC	    "None"
	#Define CALCULATE_COUNT_LOC		    "Count"
	#Define CALCULATE_SUM_LOC		    "Sum"
	#Define CALCULATE_AVERAGE_LOC	    "Average"
	#Define CALCULATE_LOWEST_LOC	    "Lowest"
	#Define CALCULATE_HIGHEST_LOC	    "Highest"
	#Define CALCULATE_STDDEV_LOC	    "Standard deviation"
	#Define CALCULATE_VARIANCE_LOC	    "Variance"

	#Define PICTUREMODE_CLIP_LOC                "Clip contents"
	#Define PICTUREMODE_SCALE_KEEP_SHAPE_LOC    "Scale contents, retain shape"
	#Define PICTUREMODE_SCALE_STRETCH_LOC       "Scale contents, fill the frame"

	*-------------------------------------------------------
	* Line/Shape Styles:
	*-------------------------------------------------------

	#Define LINE_STYLE_0_LOC			"None"
	#Define LINE_STYLE_1_LOC			"Dotted"
	#Define LINE_STYLE_2_LOC			"Dashes"
	#Define LINE_STYLE_3_LOC			"Dash-dot"
	#Define LINE_STYLE_4_LOC			"Dash-dot-dot"
	#Define LINE_STYLE_5_LOC			"Tiny dots"
	#Define LINE_STYLE_6_LOC			"Small dots"
	#Define LINE_STYLE_7_LOC			"Large dots"
	#Define LINE_STYLE_8_LOC			"Normal"

	#Define LINE_WIDTH_HAIRLINE_LOC		"Hairline"
	#Define LINE_WIDTH_1POINT_LOC		"1 point (normal)"
	#Define LINE_WIDTH_2POINT_LOC		"2 point"
	#Define LINE_WIDTH_4POINT_LOC		"4 point"
	#Define LINE_WIDTH_6POINT_LOC		"6 point"

	*-------------------------------------------------------
	* Measurement units (option/combo values):
	*-------------------------------------------------------

	#Define UNITS_NORULER_LOC	 	"Inches (no ruler)"
	#Define UNITS_INCHES_LOC	 	"Inches"
	#Define UNITS_METRIC_LOC	 	"Metric/cm"
	#Define UNITS_PIXELS_LOC	 	"Pixels"
	#Define UNITS_NONPAREIL_LOC  	"Nonpariel"
	#Define UNITS_CHARACTERS_LOC 	"Characters"

	*-------------------------------------------------------
	* String Trimming Modes (option/combo values):
	*-------------------------------------------------------

	#Define STRINGTRIM_DEFAULT_LOC          "Default trimming"
	#Define STRINGTRIM_CHAR_LOC             "Trim to nearest character"
	#Define STRINGTRIM_WORD_LOC             "Trim to nearest word"
	#Define STRINGTRIM_ELLIPSIS_CHAR_LOC    "Trim to nearest character, append ellipsis"
	#Define STRINGTRIM_ELLIPSIS_WORD_LOC    "Trim to nearest word, append ellipsis"
	#Define STRINGTRIM_ELLIPSIS_FILE_LOC    "Filespec: Show inner path as ellipsis"

	*-------------------------------------------------------
	* UI control captions (not already LOC'd) :
	*-------------------------------------------------------

	#Define USE_LOC_STRINGS_IN_UI				.T.    && Set this .T. to enable these LOC strings in UI controls

	*-------------------------------------------------------
	* Uses code like this in each object's .Init():
	*
	*#IF USE_LOC_STRINGS_IN_UI
	*    THIS.Caption = UI_CMD_OK_LOC
	*#ENDIF
	*
	*-------------------------------------------------------

	#Define UI_CMD_OK_LOC						"OK"
	#Define UI_CMD_CANCEL_LOC					"Cancel"
	#Define UI_CMD_HELP_LOC 					"Help"

	#Define UI_CMD_FONT_LOC						"Font..."
	#Define UI_CMD_CLOSE_LOC					"Close"
	#Define UI_CMD_ADD_RECORD_LOC				"Add Record"

	#Define UI_CMD_ADD_LOC						"Add"
	#Define UI_CMD_REMOVE_LOC					"Remove"

	*--- Tab Captions:

	#Define UI_TAB_GENERAL_LOC				"General"
	#Define UI_TAB_BAND_LOC					"Band"
	#Define UI_TAB_STYLE_LOC				"Style"
	#Define UI_TAB_FORMAT_LOC				"Format"
	#Define UI_TAB_PRINTWHEN_LOC			"Print when"
	#Define UI_TAB_CALCULATE_LOC			"Calculate"
	#Define UI_TAB_OTHER_LOC				"Other"
	#Define UI_TAB_PAGELAYOUT_LOC			"Page Layout"
	#Define UI_TAB_OPTIONALBANDS_LOC		"Optional Bands"
	#Define UI_TAB_DATAGROUP_LOC			"Data Grouping"
	#Define UI_TAB_VARIABLES_LOC			"Variables"
	#Define UI_TAB_PROTECTION_LOC			"Protection"
	#Define UI_TAB_RULERGRID_LOC			"Ruler & Grid"
	#Define UI_TAB_DATAENV_LOC				"Data Environment"

	#Define UI_TAB_SELECTION_LOC			"Selection"
	#Define UI_TAB_PROPERTIES_LOC			"Properties"

	*--- Options dialog:

	#Define UI_OPTIONS_FORM_CAPTION_LOC         "Report Builder Options"

	#Define UI_OPTIONS_LBL_EVENT_HANDLING_LOC	" Report Designer event handling "
	#Define UI_OPTIONS_LBL_HANDLE_TEXT_LOC      "When handling Report Designer events, the builder will:"
	#Define UI_OPTIONS_LBL_HANDLER_TABLE_LOC    " Handler Registry table "
	#Define UI_OPTIONS_LBL_TABLE_TEXT_LOC       "The Report Builder uses a lookup table to determine which class to use to handle a specific builder event and/or object type."
	#Define UI_OPTIONS_LBL_COPY_TEXT_LOC        "If you wish to override the default mappings of handler classes to report designer events, you will need to create a customizable copy of the internal handler table."
	#Define UI_OPTIONS_LBL_EXPLORE_TEXT_LOC     "Registry Explorer provides a way for you to browse the current handler registry table, and make changes if you have appropriate permissions."

	#Define UI_OPTIONS_CMD_COPY_LOC				"\<Create copy"
	#Define UI_OPTIONS_CMD_EXPLORE_LOC			"Registry \<Explorer"

	#Define UI_OPTIONS_OPT_SEARCH_LOC           "Search for a \<handler class in the registry table (see below)"
	#Define UI_OPTIONS_OPT_DEBUG_LOC            "Use the \<debug handler for all events"
	#Define UI_OPTIONS_OPT_INSPECT_LOC          "Use the e\<vent inspector for all events"
	#Define UI_OPTIONS_OPT_IGNORE_LOC           "\<Ignore builder events completely"
	#Define UI_OPTIONS_OPT_USE_INTERNAL_LOC     "\<Use internal lookup table"
	#Define UI_OPTIONS_OPT_USE_ALTERNATE_LOC    "U\<se alternative lookup table:"

	*--- Registry Explorer dialog:

	#Define UI_REGEXPLR_FORM_CAPTION_LOC		"Configuration Table"
	#Define UI_REGEXPLR_COL_TYPE_LOC			"Type"
	#Define UI_REGEXPLR_COL_CLASS_LOC			"Class"
	#Define UI_REGEXPLR_COL_LIBRARY_LOC			"Library"
	#Define UI_REGEXPLR_COL_DESCRIPT_LOC		"Description"
	#Define UI_REGEXPLR_COL_EVENT_LOC			"Event"
	#Define UI_REGEXPLR_COL_OBJTYP_LOC			"Objtype"
	#Define UI_REGEXPLR_COL_OBJCOD_LOC			"Objcode"
	#Define UI_REGEXPLR_COL_NATIVE_LOC			"Native"
	#Define UI_REGEXPLR_COL_DEBUG_LOC			"Debug"
	#Define UI_REGEXPLR_COL_FILTER_LOC			"Order"

	*--- Metadata Editor dialog:

	#Define UI_CMD_EDIT_XML_LOC					"Edit XML..."
	#Define UI_METAEDIT_LBL_RTEXTENSION_LOC		"Run-time extensions:"
	#Define UI_METAEDIT_LBL_EXECWHEN_LOC		"Execute when:"

	*--- FRX Browser dialog:

	#Define UI_FRXBROWS_FORM_CAPTION_LOC		"FRX Table Browser"

	*--- Multiple selection dialog:

	#Define UI_MULTISEL_APPLY_PROTECTION_LOC	"Apply these protection settings to the selected objects:"
	#Define UI_MULTISEL_APPLY_PRINTWHEN_LOC		"Apply these conditions to the selected objects upon saving:"

	*--- FRX Browse Panel:

	#Define UI_FRXBROWS_CHK_CURPOS_LOC			"CURPOS=.T. (Object selected in layout)"

	*--- Object Position Panel:

	#Define UI_OBJPOS_LBL_OBJECT_POS_LOC		" Object position "
	#Define UI_OBJPOS_OPT_FLOAT_LOC				"\<Float"
	#Define UI_OBJPOS_OPT_FIX_REL_TO_TOP_LOC    "Fix relative to \<top of band"
	#Define UI_OBJPOS_OPT_FRX_REL_TO_BOTTOM_LOC "Fix relative to \<bottom of band"

	*--- Stretch Down Panel:

	#Define UI_STRETCH_LBL_STRETCH_LOC			" Stretch downwards "
	#Define UI_STRETCH_OPT_NO_STRETCH_LOC		"\<No stretch"
	#Define UI_STRETCH_OPT_REL_TO_TALLEST_LOC   "Stretch re\<lative to tallest object in group"
	#Define UI_STRETCH_OPT_REL_TO_HEIGHT_LOC    "Stretch relative to \<height of band"

	*--- Absolute Positioning panel:

	#Define UI_ABSPOS_LBL_CAPTION_LOC			" Size and position in layout "
	#Define UI_ABSPOS_LBL_PAGE_TOP_LOC			"From page top:"
	#Define UI_ABSPOS_LBL_LEFT_LOC				"From left:"
	#Define UI_ABSPOS_LBL_HEIGHT_LOC			"Height:"
	#Define UI_ABSPOS_LBL_WIDTH_LOC				"Width:"

	*--- Band panel:

	#Define UI_BAND_LBL_HEIGHT_LOC				"\<Height:"
	#Define UI_BAND_CHK_CONSTANT_HEIGHT_LOC		"Constant band height"
	#Define UI_BAND_LBL_RUN_EXPR_LOC			" Run expression "
	#Define UI_BAND_LBL_ONENTRY_LOC				"On \<entry:"
	#Define UI_BAND_LBL_ONEXIT_LOC				"On e\<xit:"

	*--- Band protection panel:

	#Define UI_BANDPROT_LBL_CAPTION_LOC			" When in PROTECTED mode "
	#Define UI_BANDPROT_LBL_HELP_TEXT_LOC		"The following restrictions will apply to this band when the layout is modified in protected mode:"
	#Define UI_BANDPROT_CHK_NO_RESIZE_LOC		"Band cannot be resized"
	#Define UI_BANDPROT_CHK_NO_PROPS_LOC		"Properties dialog box is not available"

	*--- Calculate panel:

	#Define UI_CALCULATE_LBL_CAPTION_LOC		" Calculate "
	#Define UI_CALCULATE_LBL_TYPE_LOC			"Calculation type:"
	#Define UI_CALCULATE_LBL_RESET_LOC			"Reset based on:"

	*--- Comment/User panel:

	#Define UI_COMMENTUSER_LBL_COMMENT_LOC		"Comment "
	#Define UI_COMMENTUSER_LBL_USERDATA_LOC		"User data "
	#Define UI_COMMENTUSER_CMD_EDIT_COMMENT_LOC "Edit comment..."
	#Define UI_COMMENTUSER_CMD_EDIT_USER_LOC    "Edit user data..."

	*--- Load DE panel:

	#Define UI_LOADDE_LBL_CAPTION_LOC			" Load data environment "
	#Define UI_LOADDE_OPT_COPY_FROM_FRX_LOC		"Copy from another report file"
	#Define UI_LOADDE_OPT_LINK_TO_CLASS_LOC		"Link to a DataEnvironment class"
	#Define UI_LOADDE_CMD_SELECT_LOC			"Select..."
	#Define UI_LOADDE_LBL_CLASSNAME_LOC			"Class:"
	#Define UI_LOADDE_LBL_LIBRARY_LOC			"Class Library / Source:"
	#Define UI_LOADDE_CHK_PRIVATE_SESSION_LOC	"Report uses a private data session"

	*--- DesignTime Label panel:

	#Define UI_DTLABEL_LBL_CAPTION_LOC			"Design-time caption:"

	*--- Detail band properties panel:

	#Define UI_DETAIL_LBL_CAPTION_LOC			" Detail properties "
	#Define UI_DETAIL_CHK_NEW_COLUMN_LOC		"Start on new \<column"
	#Define UI_DETAIL_CHK_NEW_PAGE_LOC			"Start on new \<page"
	#Define UI_DETAIL_CHK_RESET_PAGE_LOC		"Reset page \<number to 1 for each detail set"
	#Define UI_DETAIL_CHK_HEADERFOOTER_LOC      "Associated \<header and footer bands"
	#Define UI_DETAIL_CHK_REPRINT_HEADER_LOC	"\<Reprint detail header on each page"
	#Define UI_DETAIL_LBL_THRESHOLD_LOC			"\<Start detail set on new page when less than:"
	#Define UI_DETAIL_LBL_TARGET_ALIAS_LOC		"\<Target alias expression:"

	*--- Detail bands panel:

	#Define UI_DETAILBANDS_LBL_CAPTION_LOC		" Detail bands "

	*--- Field Expression panel:

	#Define UI_FIELDEXPR_LBL_CAPTION_LOC		"\<Expression:"

	*--- Field Format panel:

	#Define UI_FORMAT_LBL_CAPTION_LOC			"\<Format expression:"
	#Define UI_FORMAT_OPT_CHARACTER_LOC			"\<Character"
	#Define UI_FORMAT_OPT_NUMERIC_LOC			"\<Numeric"
	#Define UI_FORMAT_OPT_DATE_LOC				"\<Date"
	#Define UI_FORMAT_LBL_OPTIONS_LOC			" Format options "

	#Define UI_FORMAT_LBL_TEMPLATE_LOC			"Template characters"
	#Define UI_FORMAT_OPT_OVERLAY_LOC			"\<Overlay"
	#Define UI_FORMAT_OPT_INTERLEAVE_LOC		"\<Interleave"
	#Define UI_FORMAT_LBL_JUSTIFY_LOC			"Alignment"
	#Define UI_FORMAT_OPT_JUST_LEFT_LOC			"\<Left"
	#Define UI_FORMAT_OPT_JUST_RIGHT_LOC		"\<Right"
	#Define UI_FORMAT_OPT_JUST_CENTER_LOC		"Cen\<ter"
	#Define UI_FORMAT_CHK_UPPERCASE_LOC			"To \<upper case"
	#Define UI_FORMAT_CHK_SET_DATE_LOC			"\<SET DATE format"
	#Define UI_FORMAT_CHK_BRITISH_DATE_LOC		"\<British date"

	#Define UI_FORMAT_CHK_LEFT_JUST_LOC			"\<Left justify"
	#Define UI_FORMAT_CHK_ZERO_BLANK_LOC		"Blank if \<zero"
	#Define UI_FORMAT_CHK_NEGATIVE_LOC			"(Ne\<gative)"
	#Define UI_FORMAT_CHK_CR_POSITIVE_LOC		"C\<R if positive"
	#Define UI_FORMAT_CHK_DB_NEGATIVE_LOC		"DB if negati\<ve"
	#Define UI_FORMAT_CHK_LEADING_0_LOC			"Leading z\<eros"
	#Define UI_FORMAT_CHK_CURRENCY_LOC			"C\<urrency"
	#Define UI_FORMAT_CHK_SCIENTIFIC_LOC		"Scien\<tific"

	#Define UI_FORMAT_CHK_BLANK_EMPTY_LOC		"Blank if \<empty"

	#Define UI_FORMAT_LBL_TRIM_MODE_LOC			"\<Trim mode for character expressions:"

	*--- Field Positioning panel:

	#Define UI_FIELDPOS_CHK_OVERFLOW_LOC		"\<Stretch with overflow"

	*--- Group Expression panel:

	#Define UI_GROUPEXPR_LBL_CAPTION_LOC		"Group \<expression:"

	*--- Grouping panel:

	#Define UI_GROUPING_LBL_NESTING_LOC			"Grouping nesting order:"
	#Define UI_GROUPING_LBL_GROUP_ON_LOC		"Group on:"
	#Define UI_GROUPING_LBL_STARTS_ON_LOC		" Group starts on "
	#Define UI_GROUPING_OPT_NEW_LINE_LOC		"New line"
	#Define UI_GROUPING_OPT_NEW_COL_LOC			"New \<column"
	#Define UI_GROUPING_OPT_NEW_PAGE_LOC		"New \<page"
	#Define UI_GROUPING_OPT_NEW_PAGE1_LOC		"\<New page number 1"
	#Define UI_GROUPING_CHK_REPRINT_LOC			"\<Reprint group header on each page"
	#Define UI_GROUPING_LBL_THRESHOLD_LOC		"\<Start group on new page when less than:"

	*--- Member data panel:

	#Define UI_MEMBERDATA_LBL_CAPTION_LOC		"Run-time extensions "
	#Define UI_MEMBERDATA_CMD_EDIT_LOC			"Edit settings..."

	*--- MultiPrint When panel:

	#Define UI_MULTIPRINTWHEN_LBL_CAPTION_LOC	"\<Print only when expression is true:"

	*--- MultiSelect panel:

	#Define UI_MULTISELECT_LBL_OBJECT_LOC		"\<Object"
	#Define UI_MULTISELECT_LBL_BAND_LOC			"Location at run-time"
	#Define UI_MULTISELECT_LBL_SORT_BY_LOC		" Sort by "
	#Define UI_MULTISELECT_OPT_TYPE_LOC			"\<Type"
	#Define UI_MULTISELECT_OPT_LOCATION_LOC		"\<Location"
	#Define UI_MULTISELECT_CMD_REMOVE_LOC		"Remove from list"

	*--- Object Protection panel:

	#Define UI_OBJPROTECT_LBL_CAPTION_LOC		" When in PROTECTED mode "
	#Define UI_OBJPROTECT_LBL_TEXT_LOC			"The following restrictions will apply to this report control when the layout is modified in protected mode:"
	#Define UI_OBJPROTECT_CHK_NO_RESIZE_LOC		"Object cannot be \<moved or resized"
	#Define UI_OBJPROTECT_CHK_NO_PROPS_LOC		"\<Properties dialog box is not available"
	#Define UI_OBJPROTECT_CHK_NO_DELETE_LOC		"Object cannot be \<deleted"
	#Define UI_OBJPROTECT_CHK_NO_SELECT_LOC		"Object cannot be \<selected"
	#Define UI_OBJPROTECT_CHK_NOT_VISIBLE_LOC	"Object is not \<visible in Designer"

	*--- Optional Bands panel:

	#Define UI_OPTBANDS_LBL_TITLE_LOC			" Title "
	#Define UI_OPTBANDS_CHK_TITLE_LOC			"Report has \<title band"
	#Define UI_OPTBANDS_CHK_TITLE_NEW_PAGE_LOC	"\<New page after title has printed"
	#Define UI_OPTBANDS_LBL_SUMMARY_LOC			" Summary "
	#Define UI_OPTBANDS_CHK_SUMMARY_LOC			"Report has su\<mmary band"
	#Define UI_OPTBANDS_CHK_SUMM_NEW_PAGE_LOC	"Summary prints as ne\<w page"
	#Define UI_OPTBANDS_CHK_SUMM_HEADER_LOC		"Include page \<header with summary"
	#Define UI_OPTBANDS_CHK_SUMM_FOOTER_LOC		"Include page \<footer with summary"

	*--- Page Layout panel:

	#Define UI_PAGELAYOUT_LBL_COLUMNS_LOC		" Columns "
	#Define UI_PAGELAYOUT_LBL_NUMBER_LOC		"Number:"
	#Define UI_PAGELAYOUT_LBL_WIDTH_LOC			"Width:"
	#Define UI_PAGELAYOUT_LBL_SPACING_LOC		"Spacing:"
	#Define UI_PAGELAYOUT_LBL_MARGIN_LOC		"Left margin:"

	#Define UI_PAGELAYOUT_LBL_PRINT_AREA_LOC	" Print area "
	#Define UI_PAGELAYOUT_OPT_PRINTABLE_LOC		"Printable page"
	#Define UI_PAGELAYOUT_OPT_WHOLE_LOC			"Whole page"

	#Define UI_PAGELAYOUT_LBL_PRINT_ORDER_LOC	" Column print order "
	#Define UI_PAGELAYOUT_OPT_TOP_BOTTOM_LOC	"Top to bottom"
	#Define UI_PAGELAYOUT_OPT_LEFT_RIGHT_LOC	"Left to right"

	#Define UI_PAGELAYOUT_LBL_DEF_FONT_LOC		" Default font "
	#Define UI_PAGELAYOUT_CHK_FONTSCRIPT_LOC	"Use font script"

	#Define UI_PAGELAYOUT_LBL_PRINTER_LOC		" Printer "
	#Define UI_PAGELAYOUT_CMD_PAGE_SETUP_LOC	"Page Setup..."
	#Define UI_PAGELAYOUT_CHK_SAVE_ENV_LOC		"Save printer environment"

	*--- Picture/Bound panel:

	#Define UI_PICTBOUND_LBL_CAPTION_LOC		" Control source type "
	#Define UI_PICTBOUND_OPT_FILE_LOC			"Image file name"
	#Define UI_PICTBOUND_OPT_GENERAL_LOC		"General field name"
	#Define UI_PICTBOUND_OPT_EXPRVAR_LOC		"Expression or variable name"
	#Define UI_PICTBOUND_LBL_SOURCE_LOC			"Control source:"
	#Define UI_PICTBOUND_LBL_PICTMODE_LOC		"If source and frame are different sizes:"
	#Define UI_PICTBOUND_CHK_CENTER_LOC			"Center general field horizontally in frame"

	*--- Print When panel:

	#Define UI_PRINTWHEN_LBL_CAPTION_LOC		" Print repeated values "
	#Define UI_PRINTWHEN_OPT_YES_LOC			"\<Yes"
	#Define UI_PRINTWHEN_OPT_NO_LOC				"\<No"
	#Define UI_PRINTWHEN_LBL_ALSO_PRINT_LOC		" Also print "
	#Define UI_PRINTWHEN_CHK_FIRST_WHOLE_LOC	"In \<first whole band of a new page/column"
	#Define UI_PRINTWHEN_CHK_EXPR_CHANGE_LOC	"When this data \<group expression changes:"
	#Define UI_PRINTWHEN_CHK_OVERFLOW_LOC		"When \<band content overflows to new page/column"
	#Define UI_PRINTWHEN_CHK_REMOVE_BLANK_LOC	"\<Remove line if blank"
	#Define UI_PRINTWHEN_LBL_PRINT_EXPR_LOC		"\<Print only when expression is true:"

	*--- Report Protection panel:

	#Define UI_REPPROTECT_LBL_CAPTION_LOC		" In PROTECTED mode "
	#Define UI_REPPROTECT_LBL_TEXT_LOC			"Select the features that will be unavailable when this layout is modified in protected mode:"
	#Define UI_REPPROTECT_CHK_NO_PRINT_LOC		"Report can not be run or \<printed"
	#Define UI_REPPROTECT_CHK_NO_PREVIEW_LOC	"Report can not be previe\<wed"
	#Define UI_REPPROTECT_CHK_NO_DATAENV_LOC	"The Data Environment is not available"
	#Define UI_REPPROTECT_CHK_NO_PAGELAYOUT_LOC "Page \<Layout is not available"
	#Define UI_REPPROTECT_CHK_NO_OPTBANDS_LOC	"\<Optional Bands can not be changed"
	#Define UI_REPPROTECT_CHK_NO_GROUPING_LOC	"Data \<Grouping can not be modified"
	#Define UI_REPPROTECT_CHK_NO_REPVARS_LOC	"Report \<Variables can not be edited"

	*--- Ruler/Grid panel:

	#Define UI_RULERGRID_LBL_RULER_LOC			" Ruler "
	#Define UI_RULERGRID_LBL_UNITS_LOC			"Units:"
	#Define UI_RULERGRID_CHK_SHOW_POSITION_LOC	"Show position in status bar"
	#Define UI_RULERGRID_LBL_GRID_LOC			" Grid "
	#Define UI_RULERGRID_CHK_SHOW_GRID_LOC		"Show grid lines"
	#Define UI_RULERGRID_CHK_SNAP_TO_GRID_LOC	"Snap to grid"
	#Define UI_RULERGRID_LBL_HORIZONTAL_LOC		"Horizontal spacing:"
	#Define UI_RULERGRID_LBL_VERTICAL_LOC		"Vertical spacing:"

	*--- Report Variables panel:

	#Define UI_REPVARS_LBL_CAPTION_LOC			"Variables:"
	#Define UI_REPVARS_LBL_STORE_VALUE_LOC		"Value to store:"
	#Define UI_REPVARS_LBL_INITIAL_LOC			"Initial value:"
	#Define UI_REPVARS_LBL_RESET_ON_LOC			"Reset value based on:"
	#Define UI_REPVARS_LBL_CALC_TYPE_LOC		"Calculation type:"
	#Define UI_REPVARS_CHK_RELEASE_LOC			"Release after report"

	*--- Shape format panel:
	*--- Text format panel:

	#Define UI_SHAPE_LBL_STYLE_LOC				"Style:"
	#Define UI_SHAPE_LBL_WEIGHT_LOC				"Weight:"
	#Define UI_SHAPE_LBL_CURVATURE_LOC			"Curvature:"
	#Define UI_SHAPE_LBL_COLOR_LOC				" Color "

	#Define UI_TEXTFORMAT_LBL_FONT_LOC			" Font "
	#Define UI_TEXTFORMAT_CHK_FONTSCRIPT_LOC	"Use font script"
	#Define UI_TEXTFORMAT_CHK_STRIKETHRU_LOC	"Strikethrough"
	#Define UI_TEXTFORMAT_CHK_UNDERLINE_LOC		"Underline"

	#Define UI_FORMAT_CHK_FORECOLOR_LOC			"Use default foreground (pen) color"
	#Define UI_FORMAT_CHK_BACKCOLOR_LOC			"Use default background (fill) color"
	#Define UI_FORMAT_LBL_BACKSTYLE_LOC			" Backstyle "
	#Define UI_FORMAT_OPT_OPAQUE_LOC			"Opaque"
	#Define UI_FORMAT_OPT_TRANSPARENT_LOC		"Transparent"
	#Define UI_FORMAT_LBL_SAMPLE_LOC			" Sample "

	*--- Text Label panel:

	#Define UI_TEXTLABEL_LBL_CAPTION_LOC		"Caption:"

	*--- Tooltip panel:

	#Define UI_TOOLTIP_LBL_CAPTION_LOC			"Tooltip "
	#Define UI_TOOLTIP_CMD_EDIT_LOC				"Edit tooltip..."

	*=======================================================
	* Additional constants added for SP1:
	*=======================================================

	*----------------------------------------
	* See frxDeLoader in frxUtils.prg

	#Define LOAD_DE_ERR_ADAPTERSCHEMA			"Cursoradapters with an empty CursorSchema property will not be added to the Data Environment."

	*----------------------------------------
	* See frxEvent in frxBuilder.vcx

	#Define RB_ERROR_API_NOT_SUPPORTED_LOC      "The class '{0}' does not support the expected API."

	*----------------------------------------
	* See panelReportVars in frxpanels.vcx

	#Define REPORT_VAR_INVALID_INITIAL_VALUE_LOC	"The 'Initial Value' for variable '{0}' is invalid."
	#Define REPORT_VAR_INVALID_STORE_VALUE_LOC		"The 'Value to Store' for variable '{0}' is invalid."

	*----------------------------------------
	* See panelde in frxpanels.vcx

	#Define UI_LOADDE_CHK_USE_FULL_PATH_LOC    "Use full path"

	*----------------------------------------
	* See panelFieldFormat in frxpanels.vcx

	#Define UI_FORMAT_CHK_USE_LONG_DATE_LOC		"Use \<long date setting"
	#Define UI_FORMAT_CHK_USE_SHORT_DATE_LOC	"Use \<short date setting"

	*----------------------------------------
	* See debugHandler in frxBuilder.vcx

	#Define UI_DEBUG_CHK_FLAG_REFRESH       "Refresh report layout from FRX cursor"
	#Define UI_DEBUG_CHK_FLAG_NODEFAULT     "Suppress native event behavior (NODEFAULT)"
	#Define UI_DEBUG_CMD_CONTINUE           "Continue"
	#Define UI_DEBUG_CMD_OPTIONS            "Options..."
	#Define UI_DEBUG_CMD_DETAILS            "Event details..."

	*----------------------------------------
	* See GetExprWrapper in frxhandlers.prg:

	#Define GETEXPR_LABEL_CAPTION_LOC    "Text for Label Caption"
	#Define GETEXPR_PRINT_WHEN_LOC       "Print Object When: <expr>"
	#Define GETEXPR_FIELD_EXPR_LOC       "Expression for Field on Report"
	#Define GETEXPR_OLEB_FIELD_LOC       "General Field for OLE/Bound control"
	#Define GETEXPR_OLEB_EXPR_LOC        "Expression for OLE/Bound control"
	#Define GETEXPR_GROUP_ON_LOC         "Group Records by Expression: <expr>"
	#Define GETEXPR_VALUE_TO_STORE_LOC   "Value to Store in Variable"
	#Define GETEXPR_INITIAL_VALUE_LOC    "Initial Value for Variable"
	#Define GETEXPR_BAND_ON_ENTRY_LOC    "On Entry Expression for Band"
	#Define GETEXPR_BAND_ON_EXIT_LOC     "On Exit Expression for Band"
	#Define GETEXPR_TARGET_ALIAS_LOC     "Target Alias Expression for Detail Band"

	*=======================================================
	* Additional constants added for SP2:
	*=======================================================

	#Define DRAFT_MODE_PREVIEW_WARNING_LOC			"SET REPORTBEHAVIOR is set to 80. Draft mode preview may not show dynamic behavior."

	#Define TEXTFORMAT_PREVIEW_DEFAULT_TEXT_LOC		"Quod Erat Demonstrandum"

	*--- FRX Browser dialog:

	#Define FRXBROWS_MEMO_EDIT_HELPER_TXT_LOC		"Take care when editing field contents directly."

	*--- Text Format Panel:

	#Define UI_FORMAT_OPT_ALPHA_LOC             "Specify Alpha channels"
	#Define UI_FORMAT_ALPHA_PEN_LOC				"Pen:"
	#Define UI_FORMAT_ALPHA_FILL_LOC			"Fill:"
	#Define UI_FORMAT_LBL_ALPHA_LOC             " Alpha "

	*--- Registry Explorer dialog:

	#Define UI_REGEXPLR_FORM_INTERNAL_LOC		"(Internal lookup table)"

	#Define UI_REGEXPLR_FILTER_ENU_ALL           "Show all"
	#Define UI_REGEXPLR_FILTER_ENU_HANDLERS      "Show only Event Handlers"
	#Define UI_REGEXPLR_FILTER_ENU_FILTERS       "Show only Event Filters"
	#Define UI_REGEXPLR_FILTER_ENU_EXIT          "Show only Exit Handlers"
	#Define UI_REGEXPLR_FILTER_ENU_DIALOGS       "Show only Configurable User Interface"
	#Define UI_REGEXPLR_FILTER_ENU_PROPERTIES    "Show only Advanced Property definitions"

	#Define UI_REGEXPLR_COL_PROPNAME_LOC        "Property Name"
	#Define UI_REGEXPLR_COL_PROPVALUE_LOC       "Default Value"
	#Define UI_REGEXPLR_COL_PROPTYPE_LOC        "Edit Type"
	#Define UI_REGEXPLR_COL_PROPHIDDEN_LOC      "Hidden"

	#Define UI_REGEXPLR_CMD_IMPORT              "Import"

	#Define REGEXPLR_EVTYP_HELP_TITLE_LOC		"Event Type Values:"
	#Define REGEXPLR_EVTYP_WILD_CARD_LOC		"(Any builder event)"
	#Define REGEXPLR_TARGET_ANY_OBJCODE_LOC		"(Any OBJCODE value)"
	#Define REGEXPLR_TARGET_ANY_OBJTYPE_LOC		"(Any OBJTYPE value)"
	#Define REGEXPLR_TARGET_LAYOUT_ELEMENT_LOC	"Report layout element"

	#Define REGEXPLR_OBJTYPE_HELP_TITLE_LOC		"Object Type Values:"
	#Define REGEXPLR_OBJCODE_HELP_TITLE_LOC		"Object Code Values"
	#Define REGEXPLR_PROPDEF_HELP_TITLE_LOC		"Property Edit Types:"
	#Define REGEXPLR_RECTYPE_HELP_TITLE_LOC     "Record Types:"

	#Define REGEXPLR_RECTYPE_EXITHANDLER_LOC	"Exit Handler"
	#Define REGEXPLR_RECTYPE_HANDLER_LOC	    "Event Handler"
	#Define REGEXPLR_RECTYPE_GETEXPR_LOC	    "GETEXPR Wrapper"
	#Define REGEXPLR_RECTYPE_EVENTFILTER_LOC	"Event Filter"
	#Define REGEXPLR_RECTYPE_EXTENDEDIT_LOC	    "Runtime Extension Editor"
	#Define REGEXPLR_RECTYPE_MULTITAB_LOC	    "Additional page in Multiselect Handler"
	#Define REGEXPLR_RECTYPE_EXTRATAB_LOC	    "Additional page in Event Handler"
	#Define REGEXPLR_RECTYPE_REGEDIT_LOC	    "Builder Registry Editor"
	#Define REGEXPLR_RECTYPE_FRXBROWSE_LOC	    "FRX Browser"
	#Define REGEXPLR_RECTYPE_METABROWSER_LOC	"Memberdata Browser"
	#Define REGEXPLR_RECTYPE_PROPERTYDEF_LOC	"Advanced Property Definition"
	#Define REGEXPLR_RECTYPE_MULTIPROPDEF_LOC   "Multiple-select Property Definition"

	*--- ReportBuilder NewRegisteredObject() error text:
	#Define UI_NEWREGOBJ_CLASS_LOC			"Class:"
	#Define UI_NEWREGOBJ_LIBRARY_LOC		"Library:"
	#Define UI_NEWREGOBJ_REGTABLE_LOC		"Registry Table:"

	*--- ReportBuilder Options dialog:

	#Define SETUP_CHK_SCREEN_SETTING_LOC	"Checking _screen.ReportBuilderData.Get('registry') for session-persistent setting: "
	#Define SETUP_CHK_CONFIG_SETTING_LOC	"Checking CONFIG.FPW for REPORTBUILDER_REGISTRY setting: "
	#Define SETUP_CHK_HOMEDIR_DBF_LOC		"Checking for 'reportbuilder.dbf' in home directory: "
	#Define SETUP_CHK_PATHDIR_DBF_LOC		"Checking for 'reportbuilder.dbf' in current path: "
	#Define SETUP_CHK_ASKUSER_DBF_LOC		"Asking user to locate file: "
	#Define SETUP_CHK_RESULT_EMPTY_LOC		"<empty>"
	#Define SETUP_CHK_RESULT_INVALID_LOC	"<invalid>"
	#Define SETUP_CHK_RESULT_FOUND_LOC		"Found!"
	#Define SETUP_USING_RESULT_LOC			"Using "
	#Define SETUP_USING_INTERNAL_LOC		"internal lookup table."

	#Define USE_COPY_AS_DEFAULT_REGISTRY_LOC "Do you want to use this copy as the current configuration table?"

	#Define UI_REGISTRY_SEARCH_LOG_LINK_LOC		"How was this registry table located?"
	*#define UI_REGISTRY_LOG_UNAVAILABLE_LOC     "(unavailable)"
	*#define UI_REGISTRY_LOG_EMPTYVALUE_LOC      "(empty)"
	*#define UI_REGISTRY_LOG_FOUND_LOC           "(found)"
	*#define UI_REGISTRY_LOG_USEINTERNAL_LOC     "(use internal lookup table)"

	*--- Report Header "Other" tab:

	#Define UI_TAB_HDR_OTHER_LOC 				"Other"

	*-- Advanced Tab:

	#Define UI_TAB_ADVANCED_LOC					"Advanced"

	*--- Document Properties tab:

	#Define UI_TAB_DOCUMENT_PROPERTIES_LOC		 "Document Properties"

	#Define UI_ADVPROP_ADD_DLG_CAPTION_LOC       "Add Property"
	#Define UI_ADVPROP_DEL_DLG_CAPTION_LOC       "Delete Property"
	#Define UI_ADVPROP_EDT_DLG_CAPTION_LOC       "Edit Property"

	#Define ADVPROP_EDITMODE_GETEXPR_LOC		'Expression'
	#Define ADVPROP_EDITMODE_TEXT_LOC			'Text/XML'
	#Define ADVPROP_EDITMODE_STRING_LOC			'String'
	#Define ADVPROP_EDITMODE_GETFILE_LOC		'File'
	#Define ADVPROP_EDITMODE_BOOLEAN_LOC		'Yes or No'
	#Define ADVPROP_EDITMODE_DATE_LOC			'Date'

	#Define ADVPROP_BOOLEAN_YES_LOC				"Yes"
	#Define ADVPROP_BOOLEAN_NO_LOC				"No"

	#Define ADVPROP_ALREADY_DEFINED_LOC         "'{0}' is already defined. Use a different property name."
	#Define ADVPROP_DELETE_ARE_YOU_SURE_LOC     "Are you sure you want to clear '{0}'?"
	#Define ADVPROP_EDIT_HELPER_TXT_LOC			"Enter a string value for the document property. Some property handlers may require well-formed XML and ignore other values."

	#Define UI_ADVPROP_NAME_LOC                  "Property Name:"
	#Define UI_ADVPROP_VALUE_LOC                 "Value:"
	#Define UI_ADVPROP_TYPE_LOC                  "Type:"

	#Define UI_CMD_CLEAR_LOC					"Clear"

	*--- Dynamics Tab:

	#Define UI_CMD_SCRIPT_LOC					"Script"

	#Define UI_SCRIPTPREVIEW_TITLE_LOC			"Dynamic Script Preview"
	#Define SCRIPTPREVIEW_HELPERTEXT_LOC		"This is a preview of the code that will be used at report run time to render the report element dynamically. Any changes you make here will not be saved."

	#Define UI_DYNAMICS_CONDITIONS_LOC			"Conditions:"
	#Define UI_DYNAMICS_DEFAULT_LOC			    "<default>"

	#Define DYNAMICS_HELPER_TEXT_LOC			"The dynamic style conditions will be evaluated in the order shown here. "

	#Define DYNAMICS_HELPER_TEXT2_LOC			"Press the Script button for a preview of the code that will be used. "

	#Define DYNAMICS_HELPER_TEXT3_LOC			"NOTE: If you have re-ordered your conditions, the CASE sequence here will not reflect the new order until you have saved changes by exiting the Properties dialog. "

	#Define DYNAMICS_HELPER_TEXT4_LOC			"Width and Height expressions must evaluate to values in units of 1/960 inches. A value of -1 will be interpreted as the current, default value. "

	#Define DYNAMICS_HELPER_TEXT5_LOC			"Values are tested for validity (range: 0 to " + Transform(FRX_RUNTIME_LAYOUT_DIMENSION_LIMIT) + ") and forced to integers at runtime."

	#Define DYNAMICS_STORAGE_ERROR_LOC			"There is insufficient room in the memberdata structure to store dynamics information."

	#Define DYNAMICS_DELETE_ARE_YOU_SURE_LOC   "Are you sure you want to delete '{0}'?"
	#Define DYNAMICS_NEW_COND_PROMPT_LOC       "Enter condition name:"
	#Define DYNAMICS_NEW_COND_TITLE_LOC        "Add Dynamic Style Condition"
	#Define DYNAMICS_COND_EXISTS_LOC           "A condition already exists with that name. Try a different name."

	#Define UI_TAB_EVALUATECONTENTS_LOC			"Dynamics"

	#Define UI_DYNAMICS_NAME_LOC				"Condition Name:"
	#Define UI_DYNAMICS_TEXT_LOC                " Text "
	#Define UI_DYNAMICS_EXPR_LOC				"Apply when this condition is true:"
	#Define UI_DYNAMICS_OVERRIDE_LOC			"Replace expression result with:"
	#Define UI_DYNAMICS_DLG_CAPTION_LOC			"Configure Dynamic Properties"

	#Define UI_DYNAMICS_WIDTH_LOC 				"Width Expression:"
	#Define UI_DYNAMICS_HEIGHT_LOC 				"Height Expression:"

	*--- Multiple-selection propertys:

	#Define UI_MULTIPROPS_TITLE_LOC				"Check which properties should be applied to the selected elements:"
	#Define UI_MULTIPROPS_PROPERTY_HEADER_LOC	" Property"
	#Define UI_MULTIPROPS_VALUE_HEADER_LOC		" Value"


	*--- Object Rotation Panel:

	#Define UI_OBJECT_ROTATION_LOC				" Object Rotation "

	*--- Miscellaneous or common:

	#Define UI_CMD_EDIT_LOC                     "Edit"
	#Define UI_CMD_CODE_ZOOM_LOC				"Code Zoom"

	*--- Handler form context menu:

	#Define UI_CONTEXT_MEMBERDATA_LOC			"Object Memberdata"
	#Define UI_CONTEXT_BROWSE_MEMBER_LOC		"Browse..."
	#Define UI_CONTEXT_EDIT_MEMBER_XML_LOC		"Edit XML..."

	*--- Metadata Browser form:

	#Define UI_METABROWSE_FORM_CAPTION_LOC      "MemberData Inspector"

	*--- SetupUtility class:

	#Define LOCATE_REGISTRY_MANUALLY_MSG_LOC	"The ReportBuilder registry table could not be located automatically. Would you like to locate it?"

#Endif
