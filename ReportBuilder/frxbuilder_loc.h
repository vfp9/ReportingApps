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
	#Define EVTYP_RIGHTCLICK_LOC		"(保留)"
	#Define EVTYP_PROPERTIES_LOC		"属性对话框"
	#Define EVTYP_OBJECT_CREATE_LOC		"对象创建"
	#Define EVTYP_OBJECT_CHANGE_LOC		"对象更改"
	#Define EVTYP_OBJECT_REMOVE_LOC		"对象移除"
	#Define EVTYP_OBJECT_PASTE_LOC		"对象粘贴"
	#Define EVTYP_REPORT_SAVE_LOC       "报表保存"
	#Define EVTYP_REPORT_OPEN_LOC		"报表打开"
	#Define EVTYP_REPORT_CLOSE_LOC		"报表关闭"
	#Define EVTYP_DATAENV_LOC			"打开数据环境"
	#Define EVTYP_PRINT_PREVIEW_LOC		"打印预览模式"
	#Define EVTYP_OPTIONAL_BANDS_LOC	"可选带区对话框"
	#Define EVTYP_DATA_GROUPING_LOC		"数据分组对话框"
	#Define EVTYP_VARIABLES_LOC			"变量对话框"
	#Define EVTYP_EDIT_IN_PLACE_LOC     "编辑标签文本"
	#Define EVTYP_OBJECT_DROP_LOC       "从数据环境拖拉对象"
	#Define EVTYP_SET_GRID_SCALE_LOC    "设置 Grid 比例"
	#Define EVTYP_IMPORT_DE_LOC         "载入数据环境"
	#Define EVTYP_PRINT_LOC             "打印报表"
	#Define EVTYP_QUICKREPORT_LOC       "快速报表"
	#Define EVTYP_UNKNOWN_LOC			"未知事件"

	*-------------------------------------------------------
	* Dialog Captions:
	*-------------------------------------------------------

	*#define DLG_TITLE_NEW_PREFIX_LOC		"新建 "
	#Define DLG_TITLE_NEW_PREFIX_LOC		""
	#Define DLG_TITLE_PROPERTIES_LOC		" 属性"
	#Define DLG_TITLE_BAND_LOC				" 带区"
	#Define DLG_TITLE_READONLY_SUFFIX_LOC	" [只读]"

	*-------------------------------------------------------
	* Dialog context menu prompts:
	*-------------------------------------------------------

	#Define UI_CONTEXT_EVENT_INSPECTOR_LOC	"事件检查器r..."
	#Define UI_CONTEXT_BROWSE_FRX_LOC		"浏览 FRX..."
	#Define UI_CONTEXT_OPTIONS_DIALOG_LOC  	"选项..."
	#Define UI_TOOLSMENU_OPTIONS_MESSAGE_LOC [显示"默认报表生成器选项"对话框 ]

	*-------------------------------------------------------
	* Message box strings:
	*-------------------------------------------------------

	#Define DEFAULT_MBOX_TITLE_LOC          	"报表生成器"
	#Define RB_INVALID_PARAMETERS_LOC		    "使用无效参数调用报表生成器。"
	#Define RB_FILE_NOT_FOUND_LOC			    "无法打开指定的报表文件。"
	#Define EVENT_INSPECTOR_TITLE_LOC           "报表生成器事件"
	#Define RB_GETEXPR_FAILURE_LOC              "GetExpression 处理程序不可用。将改为使用 INPUTBOX () 。"
	#Define RB_DEF_GETEXPR_PROMPT_LOC           "输入表达式："

	#Define RB_EXCEPTION_HEADER_LOC             "报表生成器遇到了一个无法恢复的异常："
	#Define RB_ERROR_NEWOBJECT_LOC              "报表生成器无法实例化以下类："
	#Define RB_ERROR_CHECK_REGISTRY_LOC         "请确保注册表已正确配置。"

	#Define DEVICEHELPER_ERROR_LOC				"无法从报表打印机环境中读取页面布局信息。"+ Chr(13) + "错误： "
	#Define NO_PRINTERS_INSTALLED_LOC			"没有安装打印机。页面布局设置可能不可用。"
	#Define PRINTER_INSTALLED_OK_LOC			"感谢您安装打印机。现在可以设置此报表的页面布局选项。"

	#Define RUNTIME_EXT_XML_HELPER_TXT_LOC		"直接编辑 XML, 但要注意保持有效的 xml 格式。警告： 当对话框关闭时, 生成器可能会重新编写 XML 的某些部分。"
	#Define RUNTIME_EXT_NO_FRX_LOC				"FRX 游标未指定或不可用。无法编辑报表成员数据。"

	#Define UNABLE_TO_COPY_REGISTRY_LOC         "无法创建注册表的副本。"
	#Define OVERWRITE_EXISTING_REGISTRY_LOC     "是否覆盖现有注册表？"
	#Define FILE_EXISTS_LOC					    "文件已存在："
	#Define REGISTRY_TABLE_LOC				    "注册表："

	#Define FEATURE_IS_PROTECTED_LOC		    "此函数在报表设计器的受保护模式中不可用。"
	#Define OBJECT_LOCK_LOC             	    "此对象可能不能被移动。"
	#Define DELETE_MBOX_TITLE_LOC			    "对象删除"
	#Define DELETE_MBOX_MSG_LOC        		    "{%1} 对象受保护，不能被删除。"
	#Define OBJECT_NO_EDIT_LOC          	    "此对象可能不能被编辑。"

	#Define GROUPED_ITEM_PROPERTIES_LOC		    [这些项被分组。若要编辑各个布局元素的属性, 必须首先使用 "格式" 菜单取消对它们的分组。]

	#Define TEXTLABEL_INVALID_CAPTION_MSG_LOC	"必须输入标签标题。"
	#Define FIELDEXPR_INVALID_CAPTION_MSG_LOC   "必须输入字段表达式。"
	#Define PICTURE_INVALID_SOURCE_MSG_LOC      "必须输入图片源。"
	#Define PICTURE_INVALID_FILENAME_MSG_LOC	"找不到源文件。请选择有效的图片源。"

	#Define PROPEDIT_MBOX_TITLE_LOC			    "无法保存"
	#Define USE_REG_ERR_MBOX_MSG_LOC		    "无法打开注册表处理程序 {%1}。将使用默认的内部 lookup 表。"

	#Define PRINTER_NAME_SUFFIX_DEFAULT_LOC	    " (默认)"

	#Define METADATA_DOM_CREATE_FAILED_LOC 	    "无法创建 MSXml.DomDocument 实例。成员数据 XML 可能不可用。"
	#Define METADATA_XML_INVALID_LOC		    "此报表元素的成员数据 XML 无效。"
	*#define METADATA_XML_REPLACE_LOC			*** MOVED TO _frxcursor.h

	#Define BAND_REMOVE_WARNING_LOC			    "{%1} 对象存在于 {%2} 带区中。"+c_CR+"如果他们留在报表中, 他们在报告布局中的位置"+c_CR+"在带区移除后是不可预知的。"+c_CR2+"是否也要删除这些对象？"+c_CR2+"是"+c_TAB+"- 删除带区中的当前对象。"+c_CR+"否"+c_TAB+"- 将对象保留在报表布局中。"+c_CR+"取消"+c_TAB+"- 返回对话框而不删除任何内容。"

	#Define DETAIL_BAND_REMOVE_WARN_LOC		    "此细节带区中存在 {%1} 对象。"+c_CR+"是否确实要删除该带区以及对象？"
	#Define GROUP_BAND_REMOVE_WARN_LOC		    "{%1} 对象存在于此组的标头和注脚中。"+c_CR+"是否确实要删除此数据分组以及对象？"

	#Define QUERY_SUSPEND_EXECUTION_LOC 	    "是否要暂停执行？"

	#Define EDIT_REPORT_VAR_PROMPT_LOC		    "变量名称："
	#Define EDIT_REPORT_VAR_CAPTION_LOC		    "报表变量"

	#Define LOAD_DE_CONFIRMATION_LOC			"这将替换本报表中现有的数据环境信息。是否继续？"
	#Define LOAD_DE_ERROR_LOC					"试图读取源报表时出错。"
	#Define LOAD_DE_INVALID_CLASS_LOC       	[必须选择基类为 "DataEnvironment" 的类。]
	#Define LOAD_DE_ERR_INSTANTIATING_CLASS_LOC	"尝试实例化数据环境类时出错错误, 因此无法将其链接到报表。"
	#Define DE_METHOD_HEADER_COMMENT_LOC		"* 此方法代码由报表生成器插入 *"
	#Define LOAD_DE_SUCCESS_LOC					[单击"确定"以保存更改时, 将更新此报表的数据环境。]

	#Define OTHER_EDIT_COMMENT_LOC			"注释存储在报表 (. frx) 文件的 COMMENTS 字段中, 报表引擎不使用它。"

	#Define OTHER_EDIT_USER_LOC					"用户数据存储在报表 (. frx) 文件的 USER 字段中, 并且报表引擎不使用它。"

	#Define OTHER_EDIT_TOOLTIP_LOC				"在报表设计器中显示布局对象的工具提示。"

	#Define OTHER_EDIT_METADATA_LOC 			"运行时扩展指定在运行时 ReportListener 对象可见的代码元素。"

	#Define METADATA_HELPER_TEXT_LOC			"运行时扩展指定 ReportListener 对象可见的代码元素。当指定 ReportListener 对象可以计算以确定是否运行扩展的表达式时执行。"

	#Define EDIT_SCRIPT_DLG_CAPTION_LOC			"编辑运行时脚本"
	#Define EDIT_META_XML_DLG_CAPTION_LOC		"成员数据 XML"

	#Define LABEL_EDIT_CAPTION_LOC              "标签标题"
	#Define LABEL_EDIT_COMMENT_LOC				"标签的标题长度不得超过254个字符。其他字符将被忽略。"
	#Define REPORT_VAR_INVALID_NAME_LOC			"请指定有效的变量名。"

	#Define REPORT_VAR_DUPLICATE_NAME_LOC       "请指定唯一的变量名。"

	#Define OPTIONS_DEFAULT_INTERNAL_LOOKUP_LOC		"内部 lookup 表"
	#Define OPTIONS_HANDLER_REGISTRY_PROMPT_LOC		"注册表控制器："
	#Define OPTIONS_GETFILE_REGISTRY_TITLE_LOC		"选择注册表事件处理程序"
	#Define OPTIONS_HANDLER_REGISTRY_INVALID_LOC	"指定的表不存在或无效。"

	#Define DTL_HELPER_TEXT_LOC  					"在受保护的报表设计期间, 设计时标题显示在布局中, 而不是字段表达式中。"

	#Define OLEBOUND_DPI_HELPERTEXT_LOC				"通过调整用于呈现报表的 DPI, 可以调整带有 OLE 绑定对象的报表的性能。"

	*-------------------------------------------------------
	* Page Layout Preview Control:
	*-------------------------------------------------------

	#Define PAGELAYOUT_FORM_CAPTION_LOC				"页面布局详细信息"

	#Define PAGELAYOUT_INFO_PAGE_WIDTH_LOC			"页宽 = "
	#Define PAGELAYOUT_INFO_PAGE_HEIGHT_LOC			"页高 = "
	#Define PAGELAYOUT_INFO_ORIENTATION_LOC			"方向 = "
	#Define PAGELAYOUT_INFO_UNPRINT_TOP_LOC			"不可打印的上边距 = "
	#Define PAGELAYOUT_INFO_UNPRINT_LEFT_LOC		"不可打印的左边距 = "
	#Define PAGELAYOUT_INFO_EXTRA_LEFT_LOC			"附加左边距 = "
	#Define PAGELAYOUT_INFO_COL_COUNT_LOC			"列数 = "
	#Define PAGELAYOUT_INFO_COL_WIDTH_LOC			"列宽 = "
	#Define PAGELAYOUT_INFO_COL_SPACE_LOC			"列空间 = "
	#Define PAGELAYOUT_INFO_HEADER_SIZE_LOC			"标头尺寸 = "
	#Define PAGELAYOUT_INFO_FOOTER_SIZE_LOC			"注脚尺寸 = "

	*-------------------------------------------------------
	* Calculation combo list:
	*-------------------------------------------------------

	#Define CALCULATE_NOTHING_LOC	    "无"
	#Define CALCULATE_COUNT_LOC		    "计数"
	#Define CALCULATE_SUM_LOC		    "求和"
	#Define CALCULATE_AVERAGE_LOC	    "平均值"
	#Define CALCULATE_LOWEST_LOC	    "最小值"
	#Define CALCULATE_HIGHEST_LOC	    "最大值"
	#Define CALCULATE_STDDEV_LOC	    "标准偏差"
	#Define CALCULATE_VARIANCE_LOC	    "方差"

	#Define PICTUREMODE_CLIP_LOC                "剪切内容"
	#Define PICTUREMODE_SCALE_KEEP_SHAPE_LOC    "缩放内容, 保留形状"
	#Define PICTUREMODE_SCALE_STRETCH_LOC       "缩放内容, 填充框架"

	*-------------------------------------------------------
	* Line/Shape Styles:
	*-------------------------------------------------------

	#Define LINE_STYLE_0_LOC			"无"
	#Define LINE_STYLE_1_LOC			"虚线"
	#Define LINE_STYLE_2_LOC			"破折线"
	#Define LINE_STYLE_3_LOC			"点划线"
	#Define LINE_STYLE_4_LOC			"点点划线"
	#Define LINE_STYLE_5_LOC			"微点"
	#Define LINE_STYLE_6_LOC			"小点"
	#Define LINE_STYLE_7_LOC			"大点"
	#Define LINE_STYLE_8_LOC			"常规"

	#Define LINE_WIDTH_HAIRLINE_LOC		"极细"
	#Define LINE_WIDTH_1POINT_LOC		"1 点 (常规)"
	#Define LINE_WIDTH_2POINT_LOC		"2 点"
	#Define LINE_WIDTH_4POINT_LOC		"4 点"
	#Define LINE_WIDTH_6POINT_LOC		"6 点"

	*-------------------------------------------------------
	* Measurement units (option/combo values):
	*-------------------------------------------------------

	#Define UNITS_NORULER_LOC	 	"英寸 (无标尺)"
	#Define UNITS_INCHES_LOC	 	"英寸"
	#Define UNITS_METRIC_LOC	 	"公制/cm"
	#Define UNITS_PIXELS_LOC	 	"像素"
	#Define UNITS_NONPAREIL_LOC  	"Nonpariel"
	#Define UNITS_CHARACTERS_LOC 	"字符"

	*-------------------------------------------------------
	* String Trimming Modes (option/combo values):
	*-------------------------------------------------------

	#Define STRINGTRIM_DEFAULT_LOC          "默认修剪"
	#Define STRINGTRIM_CHAR_LOC             "修剪到最近的字符"
	#Define STRINGTRIM_WORD_LOC             "修剪到最近的单词"
	#Define STRINGTRIM_ELLIPSIS_CHAR_LOC    "修剪到最近的字符, 追加省略号"
	#Define STRINGTRIM_ELLIPSIS_WORD_LOC    "修剪到最近的单词, 追加省略号"
	#Define STRINGTRIM_ELLIPSIS_FILE_LOC    "文件规范：将内部路径显示为省略号"

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

	#Define UI_CMD_OK_LOC						"确定"
	#Define UI_CMD_CANCEL_LOC					"取消"
	#Define UI_CMD_HELP_LOC 					"帮助"

	#Define UI_CMD_FONT_LOC						"字体..."
	#Define UI_CMD_CLOSE_LOC					"关闭"
	#Define UI_CMD_ADD_RECORD_LOC				"增加记录"

	#Define UI_CMD_ADD_LOC						"增加"
	#Define UI_CMD_REMOVE_LOC					"移除"

	*--- Tab Captions:

	#Define UI_TAB_GENERAL_LOC				"常规"
	#Define UI_TAB_BAND_LOC					"带区"
	#Define UI_TAB_STYLE_LOC				"样式"
	#Define UI_TAB_FORMAT_LOC				"格式"
	#Define UI_TAB_PRINTWHEN_LOC			"打印条件"
	#Define UI_TAB_CALCULATE_LOC			"计算"
	#Define UI_TAB_OTHER_LOC				"其他"
	#Define UI_TAB_PAGELAYOUT_LOC			"页面布局"
	#Define UI_TAB_OPTIONALBANDS_LOC		"带区选项"
	#Define UI_TAB_DATAGROUP_LOC			"数据分组"
	#Define UI_TAB_VARIABLES_LOC			"变量"
	#Define UI_TAB_PROTECTION_LOC			"保护"
	#Define UI_TAB_RULERGRID_LOC			"标尺和网格"
	#Define UI_TAB_DATAENV_LOC				"数据环境"

	#Define UI_TAB_SELECTION_LOC			"选择"
	#Define UI_TAB_PROPERTIES_LOC			"属性"

	*--- Options dialog:

	#Define UI_OPTIONS_FORM_CAPTION_LOC         "报表生成器选项"

	#Define UI_OPTIONS_LBL_EVENT_HANDLING_LOC	" 报表设计器事件控制 "
	#Define UI_OPTIONS_LBL_HANDLE_TEXT_LOC      "在处理报表设计器事件时, 生成器将："
	#Define UI_OPTIONS_LBL_HANDLER_TABLE_LOC    " 控制注册表 "
	#Define UI_OPTIONS_LBL_TABLE_TEXT_LOC       "报表生成器使用 lookup 表确定要用于处理特定生成器事件和/或对象类型的类."
	#Define UI_OPTIONS_LBL_COPY_TEXT_LOC        "如果希望重写处理程序类的默认映射以报告设计器事件, 则需要创建内部处理程序表的可自定义副本。"
	#Define UI_OPTIONS_LBL_EXPLORE_TEXT_LOC     "注册表资源管理器提供了一种浏览当前处理程序注册表的方法, 如果具有适当的权限, 则进行更改。"

	#Define UI_OPTIONS_CMD_COPY_LOC				"创建副本(\<C)"
	#Define UI_OPTIONS_CMD_EXPLORE_LOC			"注册表浏览器(\<E)"

	#Define UI_OPTIONS_OPT_SEARCH_LOC           "在注册表中搜索一个控制类(\<h)(参考下面)"
	#Define UI_OPTIONS_OPT_DEBUG_LOC            "对所有事件使用调式控制(\<d)"
	#Define UI_OPTIONS_OPT_INSPECT_LOC          "对所有事件使用事件检查器(\<v)"
	#Define UI_OPTIONS_OPT_IGNORE_LOC           "完全忽略生成器事件(\<I)"
	#Define UI_OPTIONS_OPT_USE_INTERNAL_LOC     "使用内部 Lookup 表(\<U)"
	#Define UI_OPTIONS_OPT_USE_ALTERNATE_LOC    "使用其他 lookup 表(\<s)："

	*--- Registry Explorer dialog:

	#Define UI_REGEXPLR_FORM_CAPTION_LOC		"配置表"
	#Define UI_REGEXPLR_COL_TYPE_LOC			"类型"
	#Define UI_REGEXPLR_COL_CLASS_LOC			"类"
	#Define UI_REGEXPLR_COL_LIBRARY_LOC			"类库"
	#Define UI_REGEXPLR_COL_DESCRIPT_LOC		"描述"
	#Define UI_REGEXPLR_COL_EVENT_LOC			"事件"
	#Define UI_REGEXPLR_COL_OBJTYP_LOC			"对象类型"
	#Define UI_REGEXPLR_COL_OBJCOD_LOC			"对象代码"
	#Define UI_REGEXPLR_COL_NATIVE_LOC			"本机"
	#Define UI_REGEXPLR_COL_DEBUG_LOC			"调试"
	#Define UI_REGEXPLR_COL_FILTER_LOC			"Order"

	*--- Metadata Editor dialog:

	#Define UI_CMD_EDIT_XML_LOC					"编辑 XML..."
	#Define UI_METAEDIT_LBL_RTEXTENSION_LOC		"运行时扩展："
	#Define UI_METAEDIT_LBL_EXECWHEN_LOC		"执行条件："

	*--- FRX Browser dialog:

	#Define UI_FRXBROWS_FORM_CAPTION_LOC		"FRX 表浏览器"

	*--- Multiple selection dialog:

	#Define UI_MULTISEL_APPLY_PROTECTION_LOC	"将这些保护设置应用于所选对象："
	#Define UI_MULTISEL_APPLY_PRINTWHEN_LOC		"保存时将这些条件应用于所选对象："

	*--- FRX Browse Panel:

	#Define UI_FRXBROWS_CHK_CURPOS_LOC			"CURPOS=.T. (在布局中选择的对象)"

	*--- Object Position Panel:

	#Define UI_OBJPOS_LBL_OBJECT_POS_LOC		" 对象位置 "
	#Define UI_OBJPOS_OPT_FLOAT_LOC				"浮动(\<F)"
	#Define UI_OBJPOS_OPT_FIX_REL_TO_TOP_LOC    "相对于带区顶部固定(\<t)"
	#Define UI_OBJPOS_OPT_FRX_REL_TO_BOTTOM_LOC "相对于带区底部固定(\<b)"

	*--- Stretch Down Panel:

	#Define UI_STRETCH_LBL_STRETCH_LOC			" 向下伸展 "
	#Define UI_STRETCH_OPT_NO_STRETCH_LOC		"无拉伸(\<N)"
	#Define UI_STRETCH_OPT_REL_TO_TALLEST_LOC   "相对于组中最高对象拉伸(\<l)"
	#Define UI_STRETCH_OPT_REL_TO_HEIGHT_LOC    "相对于带区高度拉伸(\<h)"

	*--- Absolute Positioning panel:

	#Define UI_ABSPOS_LBL_CAPTION_LOC			" 布局中的大小和位置 "
	#Define UI_ABSPOS_LBL_PAGE_TOP_LOC			"从页面顶部："
	#Define UI_ABSPOS_LBL_LEFT_LOC				"从左边："
	#Define UI_ABSPOS_LBL_HEIGHT_LOC			"高度："
	#Define UI_ABSPOS_LBL_WIDTH_LOC				"宽度："

	*--- Band panel:

	#Define UI_BAND_LBL_HEIGHT_LOC				"高度(\<H)："
	#Define UI_BAND_CHK_CONSTANT_HEIGHT_LOC		"恒定带区高度"
	#Define UI_BAND_LBL_RUN_EXPR_LOC			" 运行表达式 "
	#Define UI_BAND_LBL_ONENTRY_LOC				"在进入时(\<e)："
	#Define UI_BAND_LBL_ONEXIT_LOC				"在退出时(\<x)："

	*--- Band protection panel:

	#Define UI_BANDPROT_LBL_CAPTION_LOC			" 在受保护模式下 "
	#Define UI_BANDPROT_LBL_HELP_TEXT_LOC		"当在受保护模式中修改布局时, 以下限制将应用于此带区："
	#Define UI_BANDPROT_CHK_NO_RESIZE_LOC		"不能调整带区的大小"
	#Define UI_BANDPROT_CHK_NO_PROPS_LOC		"属性对话框不可用"

	*--- Calculate panel:

	#Define UI_CALCULATE_LBL_CAPTION_LOC		" 计算 "
	#Define UI_CALCULATE_LBL_TYPE_LOC			"计算类型:"
	#Define UI_CALCULATE_LBL_RESET_LOC			"基于以下内容重置:"

	*--- Comment/User panel:

	#Define UI_COMMENTUSER_LBL_COMMENT_LOC		"注释 "
	#Define UI_COMMENTUSER_LBL_USERDATA_LOC		"用户数据 "
	#Define UI_COMMENTUSER_CMD_EDIT_COMMENT_LOC "编辑注释..."
	#Define UI_COMMENTUSER_CMD_EDIT_USER_LOC    "编辑用户数据..."

	*--- Load DE panel:

	#Define UI_LOADDE_LBL_CAPTION_LOC			" 载入数据环境 "
	#Define UI_LOADDE_OPT_COPY_FROM_FRX_LOC		"从其他报表文件复制"
	#Define UI_LOADDE_OPT_LINK_TO_CLASS_LOC		"链接到一个数据环境类"
	#Define UI_LOADDE_CMD_SELECT_LOC			"选择..."
	#Define UI_LOADDE_LBL_CLASSNAME_LOC			"类："
	#Define UI_LOADDE_LBL_LIBRARY_LOC			"类库 / 源："
	#Define UI_LOADDE_CHK_PRIVATE_SESSION_LOC	"报表使用私有数据工作期"

	*--- DesignTime Label panel:

	#Define UI_DTLABEL_LBL_CAPTION_LOC			"设计时标题:"

	*--- Detail band properties panel:

	#Define UI_DETAIL_LBL_CAPTION_LOC			" 详细属性信息 "
	#Define UI_DETAIL_CHK_NEW_COLUMN_LOC		"从新列开始(\<c)"
	#Define UI_DETAIL_CHK_NEW_PAGE_LOC			"从新页开始(\<p)"
	#Define UI_DETAIL_CHK_RESET_PAGE_LOC		"重置每个细节的页码为 1 (\<n)"
	#Define UI_DETAIL_CHK_HEADERFOOTER_LOC      "关联标头和注脚带区(\<h)"
	#Define UI_DETAIL_CHK_REPRINT_HEADER_LOC	"在每页上重新打印细节标头(\<R)"
	#Define UI_DETAIL_LBL_THRESHOLD_LOC			"在小于此值时在新页开始细节(\<S)："
	#Define UI_DETAIL_LBL_TARGET_ALIAS_LOC		"目标别名表达式(\<T)："

	*--- Detail bands panel:

	#Define UI_DETAILBANDS_LBL_CAPTION_LOC		" 细节带区 "

	*--- Field Expression panel:

	#Define UI_FIELDEXPR_LBL_CAPTION_LOC		"表达式(\<E)："

	*--- Field Format panel:

	#Define UI_FORMAT_LBL_CAPTION_LOC			"格式表达式(\<F)："
	#Define UI_FORMAT_OPT_CHARACTER_LOC			"字符(\<C)"
	#Define UI_FORMAT_OPT_NUMERIC_LOC			"数值(\<N)"
	#Define UI_FORMAT_OPT_DATE_LOC				"日期(\<D)"
	#Define UI_FORMAT_LBL_OPTIONS_LOC			" 格式选项 "

	#Define UI_FORMAT_LBL_TEMPLATE_LOC			"模板字符"
	#Define UI_FORMAT_OPT_OVERLAY_LOC			"覆盖(\<O)"
	#Define UI_FORMAT_OPT_INTERLEAVE_LOC		"插入(\<I)"
	#Define UI_FORMAT_LBL_JUSTIFY_LOC			"(文本)对齐方式"
	#Define UI_FORMAT_OPT_JUST_LEFT_LOC			"左(\<L)"
	#Define UI_FORMAT_OPT_JUST_RIGHT_LOC		"右(\<R)"
	#Define UI_FORMAT_OPT_JUST_CENTER_LOC		"居中(\<t)"
	#Define UI_FORMAT_CHK_UPPERCASE_LOC			"字符大写(\<u)"
	#Define UI_FORMAT_CHK_SET_DATE_LOC			"日期格式(\<S)"
	#Define UI_FORMAT_CHK_BRITISH_DATE_LOC		"英国日期(\<B)"

	#Define UI_FORMAT_CHK_LEFT_JUST_LOC			"左对齐(\<L)"
	#Define UI_FORMAT_CHK_ZERO_BLANK_LOC		"如果为 0 则置空(\<z)"
	#Define UI_FORMAT_CHK_NEGATIVE_LOC			"(负值(\<g))"
	#Define UI_FORMAT_CHK_CR_POSITIVE_LOC		"如果为正数则加 C\<R"
	#Define UI_FORMAT_CHK_DB_NEGATIVE_LOC		"如果为负数则加 DB(\<v)"
	#Define UI_FORMAT_CHK_LEADING_0_LOC			"前导零(\<e)"
	#Define UI_FORMAT_CHK_CURRENCY_LOC			"货币(\<u)"
	#Define UI_FORMAT_CHK_SCIENTIFIC_LOC		"科学计数法(\<t)"

	#Define UI_FORMAT_CHK_BLANK_EMPTY_LOC		"空白 (如果为空)"

	#Define UI_FORMAT_LBL_TRIM_MODE_LOC			"字符表达式的修剪模式(\<T)："

	*--- Field Positioning panel:

	#Define UI_FIELDPOS_CHK_OVERFLOW_LOC		"溢出时伸展(\<S)"

	*--- Group Expression panel:

	#Define UI_GROUPEXPR_LBL_CAPTION_LOC		"组表达式(\<e)："

	*--- Grouping panel:

	#Define UI_GROUPING_LBL_NESTING_LOC			"分组嵌套顺序："
	#Define UI_GROUPING_LBL_GROUP_ON_LOC		"分组依据："
	#Define UI_GROUPING_LBL_STARTS_ON_LOC		" 组开始于 "
	#Define UI_GROUPING_OPT_NEW_LINE_LOC		"新行"
	#Define UI_GROUPING_OPT_NEW_COL_LOC			"新列(\<c)"
	#Define UI_GROUPING_OPT_NEW_PAGE_LOC		"新页(\<p)"
	#Define UI_GROUPING_OPT_NEW_PAGE1_LOC		"新页从页面 1 开始(\<N)"
	#Define UI_GROUPING_CHK_REPRINT_LOC			"在每个页面上重新打印组标题(\<R)"
	#Define UI_GROUPING_LBL_THRESHOLD_LOC		"小于下值时在新页面开始组(\<S)："

	*--- Member data panel:

	#Define UI_MEMBERDATA_LBL_CAPTION_LOC		"运行时扩展 "
	#Define UI_MEMBERDATA_CMD_EDIT_LOC			"编辑设置..."

	*--- MultiPrint When panel:

	#Define UI_MULTIPRINTWHEN_LBL_CAPTION_LOC	"仅在表达式为 true 时打印:(\<P)："

	*--- MultiSelect panel:

	#Define UI_MULTISELECT_LBL_OBJECT_LOC		"对象(\<O)"
	#Define UI_MULTISELECT_LBL_BAND_LOC			"运行时的位置"
	#Define UI_MULTISELECT_LBL_SORT_BY_LOC		" 排序 "
	#Define UI_MULTISELECT_OPT_TYPE_LOC			"类型(\<T)"
	#Define UI_MULTISELECT_OPT_LOCATION_LOC		"位置(\<L)"
	#Define UI_MULTISELECT_CMD_REMOVE_LOC		"从列表移除"

	*--- Object Protection panel:

	#Define UI_OBJPROTECT_LBL_CAPTION_LOC		" 处于保护模式时 "
	#Define UI_OBJPROTECT_LBL_TEXT_LOC			"当在受保护模式中修改布局时, 以下限制将应用于此报表控件："
	#Define UI_OBJPROTECT_CHK_NO_RESIZE_LOC		"对象不能移动或调整大小(\<m)"
	#Define UI_OBJPROTECT_CHK_NO_PROPS_LOC		"属性对话框不可用(\<P)"
	#Define UI_OBJPROTECT_CHK_NO_DELETE_LOC		"不能删除对象(\<d)"
	#Define UI_OBJPROTECT_CHK_NO_SELECT_LOC		"不能选择对象(\<s)"
	#Define UI_OBJPROTECT_CHK_NOT_VISIBLE_LOC	"对象在设计器中不可见(\<v)"

	*--- Optional Bands panel:

	#Define UI_OPTBANDS_LBL_TITLE_LOC			" 标题 "
	#Define UI_OPTBANDS_CHK_TITLE_LOC			"报表具有标题带区(\<t)"
	#Define UI_OPTBANDS_CHK_TITLE_NEW_PAGE_LOC	"打印标题后换页(\<N)"
	#Define UI_OPTBANDS_LBL_SUMMARY_LOC			" 概要 "
	#Define UI_OPTBANDS_CHK_SUMMARY_LOC			"报表具有概要带区(\<m)"
	#Define UI_OPTBANDS_CHK_SUMM_NEW_PAGE_LOC	"在新页打印概要(\<w)"
	#Define UI_OPTBANDS_CHK_SUMM_HEADER_LOC		"在概要中包含页标头(\<h)"
	#Define UI_OPTBANDS_CHK_SUMM_FOOTER_LOC		"在概要中包含页注脚(\<f)"

	*--- Page Layout panel:

	#Define UI_PAGELAYOUT_LBL_COLUMNS_LOC		" 列 "
	#Define UI_PAGELAYOUT_LBL_NUMBER_LOC		"数量："
	#Define UI_PAGELAYOUT_LBL_WIDTH_LOC			"宽度："
	#Define UI_PAGELAYOUT_LBL_SPACING_LOC		"空间："
	#Define UI_PAGELAYOUT_LBL_MARGIN_LOC		"左边距："

	#Define UI_PAGELAYOUT_LBL_PRINT_AREA_LOC	" 打印区域 "
	#Define UI_PAGELAYOUT_OPT_PRINTABLE_LOC		"打印页面"
	#Define UI_PAGELAYOUT_OPT_WHOLE_LOC			"打印整页"

	#Define UI_PAGELAYOUT_LBL_PRINT_ORDER_LOC	" 列打印顺序 "
	#Define UI_PAGELAYOUT_OPT_TOP_BOTTOM_LOC	"从上到下"
	#Define UI_PAGELAYOUT_OPT_LEFT_RIGHT_LOC	"从左至右"

	#Define UI_PAGELAYOUT_LBL_DEF_FONT_LOC		" 默认字体 "
	#Define UI_PAGELAYOUT_CHK_FONTSCRIPT_LOC	"使用字体脚本"

	#Define UI_PAGELAYOUT_LBL_PRINTER_LOC		" 打印机 "
	#Define UI_PAGELAYOUT_CMD_PAGE_SETUP_LOC	"页面设置..."
	#Define UI_PAGELAYOUT_CHK_SAVE_ENV_LOC		"保存打印机环境"

	*--- Picture/Bound panel:

	#Define UI_PICTBOUND_LBL_CAPTION_LOC		" 控件源类型 "
	#Define UI_PICTBOUND_OPT_FILE_LOC			"图像文件名"
	#Define UI_PICTBOUND_OPT_GENERAL_LOC		"通用字段名"
	#Define UI_PICTBOUND_OPT_EXPRVAR_LOC		"表达式或变量名"
	#Define UI_PICTBOUND_LBL_SOURCE_LOC			"控件源："
	#Define UI_PICTBOUND_LBL_PICTMODE_LOC		"如果源和框架大小不同："
	#Define UI_PICTBOUND_CHK_CENTER_LOC			"在框架中水平居中通用字段"

	*--- Print When panel:

	#Define UI_PRINTWHEN_LBL_CAPTION_LOC		" 打印重复值 "
	#Define UI_PRINTWHEN_OPT_YES_LOC			"是(\<Y)"
	#Define UI_PRINTWHEN_OPT_NO_LOC				"否(\<N)"
	#Define UI_PRINTWHEN_LBL_ALSO_PRINT_LOC		" 同时打印 "
	#Define UI_PRINTWHEN_CHK_FIRST_WHOLE_LOC	"在新页/列的第一个完整带区(\<f)"
	#Define UI_PRINTWHEN_CHK_EXPR_CHANGE_LOC	"当该数据分组表达式改变时(\<g):"
	#Define UI_PRINTWHEN_CHK_OVERFLOW_LOC		"当细节带区溢出到新页/列时(\<b)"
	#Define UI_PRINTWHEN_CHK_REMOVE_BLANK_LOC	"移除空行(\<R)"
	#Define UI_PRINTWHEN_LBL_PRINT_EXPR_LOC		"当表达式为真时打印(\<P)："

	*--- Report Protection panel:

	#Define UI_REPPROTECT_LBL_CAPTION_LOC		" 处于保护模式时 "
	#Define UI_REPPROTECT_LBL_TEXT_LOC			"选择在受保护模式中修改此布局时将不可用的功能:"
	#Define UI_REPPROTECT_CHK_NO_PRINT_LOC		"报表不能运行或打印(\<p)"
	#Define UI_REPPROTECT_CHK_NO_PREVIEW_LOC	"不能预览报表(\<w)"
	#Define UI_REPPROTECT_CHK_NO_DATAENV_LOC	"数据环境不可用"
	#Define UI_REPPROTECT_CHK_NO_PAGELAYOUT_LOC "页面布局不可用(\<L)"
	#Define UI_REPPROTECT_CHK_NO_OPTBANDS_LOC	"不能更改带区选项(\<O)"
	#Define UI_REPPROTECT_CHK_NO_GROUPING_LOC	"不能编辑数据分组(\<G)"
	#Define UI_REPPROTECT_CHK_NO_REPVARS_LOC	"不能编辑报表变量(\<V)"

	*--- Ruler/Grid panel:

	#Define UI_RULERGRID_LBL_RULER_LOC			" 标尺 "
	#Define UI_RULERGRID_LBL_UNITS_LOC			"单位："
	#Define UI_RULERGRID_CHK_SHOW_POSITION_LOC	"在状态栏中显示位置"
	#Define UI_RULERGRID_LBL_GRID_LOC			" 表格 "
	#Define UI_RULERGRID_CHK_SHOW_GRID_LOC		"显示表格线"
	#Define UI_RULERGRID_CHK_SNAP_TO_GRID_LOC	"对齐网格"
	#Define UI_RULERGRID_LBL_HORIZONTAL_LOC		"水平间距："
	#Define UI_RULERGRID_LBL_VERTICAL_LOC		"垂直间距："

	*--- Report Variables panel:

	#Define UI_REPVARS_LBL_CAPTION_LOC			"变量："
	#Define UI_REPVARS_LBL_STORE_VALUE_LOC		"要存储的值："
	#Define UI_REPVARS_LBL_INITIAL_LOC			"初始值："
	#Define UI_REPVARS_LBL_RESET_ON_LOC			"基于以下内容重置值:"
	#Define UI_REPVARS_LBL_CALC_TYPE_LOC		"计算类型:"
	#Define UI_REPVARS_CHK_RELEASE_LOC			"报表输出后释放"

	*--- Shape format panel:
	*--- Text format panel:

	#Define UI_SHAPE_LBL_STYLE_LOC				"样式："
	#Define UI_SHAPE_LBL_WEIGHT_LOC				"粗细："
	#Define UI_SHAPE_LBL_CURVATURE_LOC			"曲率："
	#Define UI_SHAPE_LBL_COLOR_LOC				" 颜色 "

	#Define UI_TEXTFORMAT_LBL_FONT_LOC			" 字体 "
	#Define UI_TEXTFORMAT_CHK_FONTSCRIPT_LOC	"使用字体脚本"
	#Define UI_TEXTFORMAT_CHK_STRIKETHRU_LOC	"删除线"
	#Define UI_TEXTFORMAT_CHK_UNDERLINE_LOC		"下划线"

	#Define UI_FORMAT_CHK_FORECOLOR_LOC			"使用默认前景 (画笔) 颜色"
	#Define UI_FORMAT_CHK_BACKCOLOR_LOC			"使用默认背景 (填充) 颜色"
	#Define UI_FORMAT_LBL_BACKSTYLE_LOC			" 背景样式 "
	#Define UI_FORMAT_OPT_OPAQUE_LOC			"不透明"
	#Define UI_FORMAT_OPT_TRANSPARENT_LOC		"透明"
	#Define UI_FORMAT_LBL_SAMPLE_LOC			" 示例 "

	*--- Text Label panel:

	#Define UI_TEXTLABEL_LBL_CAPTION_LOC		"标题："

	*--- Tooltip panel:

	#Define UI_TOOLTIP_LBL_CAPTION_LOC			"提示 "
	#Define UI_TOOLTIP_CMD_EDIT_LOC				"编辑提示..."

	*=======================================================
	* Additional constants added for SP1:
	*=======================================================

	*----------------------------------------
	* See frxDeLoader in frxUtils.prg

	#Define LOAD_DE_ERR_ADAPTERSCHEMA			"具有空CursorSchema属性的CursorAdapter将不会添加到数据环境中。"

	*----------------------------------------
	* See frxEvent in frxBuilder.vcx

	#Define RB_ERROR_API_NOT_SUPPORTED_LOC      "类 '{0}' 不支持预期的 API。"

	*----------------------------------------
	* See panelReportVars in frxpanels.vcx

	#Define REPORT_VAR_INVALID_INITIAL_VALUE_LOC	"变量 '{0}' 的 '初始值' 无效。"
	#Define REPORT_VAR_INVALID_STORE_VALUE_LOC		"变量 '{0}' 的 '存储值' 无效。"

	*----------------------------------------
	* See panelde in frxpanels.vcx

	#Define UI_LOADDE_CHK_USE_FULL_PATH_LOC    "使用完整路径"

	*----------------------------------------
	* See panelFieldFormat in frxpanels.vcx

	#Define UI_FORMAT_CHK_USE_LONG_DATE_LOC		"使用长日期格式(\<l)"
	#Define UI_FORMAT_CHK_USE_SHORT_DATE_LOC	"使用短日期格式(\<s)"

	*----------------------------------------
	* See debugHandler in frxBuilder.vcx

	#Define UI_DEBUG_CHK_FLAG_REFRESH       "从 FRX 游标刷新报表布局"
	#Define UI_DEBUG_CHK_FLAG_NODEFAULT     "取消本机事件行为 (NODEFAULT)"
	#Define UI_DEBUG_CMD_CONTINUE           "继续"
	#Define UI_DEBUG_CMD_OPTIONS            "选项..."
	#Define UI_DEBUG_CMD_DETAILS            "事件详细信息..."

	*----------------------------------------
	* See GetExprWrapper in frxhandlers.prg:

	#Define GETEXPR_LABEL_CAPTION_LOC    "标签标题的文本"
	#Define GETEXPR_PRINT_WHEN_LOC       "当 <expr> 为 .T. 时打印对象"
	#Define GETEXPR_FIELD_EXPR_LOC       "报表上字段的表达式"
	#Define GETEXPR_OLEB_FIELD_LOC       "用于 OLE/绑定控件的通用字段"
	#Define GETEXPR_OLEB_EXPR_LOC        "OLE/绑定控件的表达式"
	#Define GETEXPR_GROUP_ON_LOC         "依据表达式 <expr> 分组记录"
	#Define GETEXPR_VALUE_TO_STORE_LOC   "要存储在变量中的值"
	#Define GETEXPR_INITIAL_VALUE_LOC    "变量的初始值"
	#Define GETEXPR_BAND_ON_ENTRY_LOC    "带区入口表达式"
	#Define GETEXPR_BAND_ON_EXIT_LOC     "带区出口表达式"
	#Define GETEXPR_TARGET_ALIAS_LOC     "细节带区的目标别名表达式"

	*=======================================================
	* Additional constants added for SP2:
	*=======================================================

	#Define DRAFT_MODE_PREVIEW_WARNING_LOC			"SET REPORTBEHAVIOR 被设置为 80. 草稿模式预览可能不显示动态行为。"

	#Define TEXTFORMAT_PREVIEW_DEFAULT_TEXT_LOC		"这是证明"

	*--- FRX Browser dialog:

	#Define FRXBROWS_MEMO_EDIT_HELPER_TXT_LOC		"直接编辑字段内容时要小心。"

	*--- Text Format Panel:

	#Define UI_FORMAT_OPT_ALPHA_LOC             "指定 Alpha 通道"
	#Define UI_FORMAT_ALPHA_PEN_LOC				"画笔："
	#Define UI_FORMAT_ALPHA_FILL_LOC			"填充："
	#Define UI_FORMAT_LBL_ALPHA_LOC             " Alpha "

	*--- Registry Explorer dialog:

	#Define UI_REGEXPLR_FORM_INTERNAL_LOC		"(内部 lookup 表)"

	#Define UI_REGEXPLR_FILTER_ENU_ALL           "显示所有"
	#Define UI_REGEXPLR_FILTER_ENU_HANDLERS      "仅显示事件处理程序"
	#Define UI_REGEXPLR_FILTER_ENU_FILTERS       "仅显示事件筛选器"
	#Define UI_REGEXPLR_FILTER_ENU_EXIT          "仅显示退出处理程序"
	#Define UI_REGEXPLR_FILTER_ENU_DIALOGS       "仅显示可配置的用户界面"
	#Define UI_REGEXPLR_FILTER_ENU_PROPERTIES    "仅显示高级属性定义"

	#Define UI_REGEXPLR_COL_PROPNAME_LOC        "属性名"
	#Define UI_REGEXPLR_COL_PROPVALUE_LOC       "默认值"
	#Define UI_REGEXPLR_COL_PROPTYPE_LOC        "编辑类型"
	#Define UI_REGEXPLR_COL_PROPHIDDEN_LOC      "隐藏"

	#Define UI_REGEXPLR_CMD_IMPORT              "导入"

	#Define REGEXPLR_EVTYP_HELP_TITLE_LOC		"事件类型的值："
	#Define REGEXPLR_EVTYP_WILD_CARD_LOC		"(任何生成器事件)"
	#Define REGEXPLR_TARGET_ANY_OBJCODE_LOC		"(任何对象代码的值)"
	#Define REGEXPLR_TARGET_ANY_OBJTYPE_LOC		"(任何对象类型的值)"
	#Define REGEXPLR_TARGET_LAYOUT_ELEMENT_LOC	"报表布局元素"

	#Define REGEXPLR_OBJTYPE_HELP_TITLE_LOC		"对象类型的值："
	#Define REGEXPLR_OBJCODE_HELP_TITLE_LOC		"对象代码的值："
	#Define REGEXPLR_PROPDEF_HELP_TITLE_LOC		"属性编辑类型："
	#Define REGEXPLR_RECTYPE_HELP_TITLE_LOC     "记录类型："

	#Define REGEXPLR_RECTYPE_EXITHANDLER_LOC	"退出处理程序"
	#Define REGEXPLR_RECTYPE_HANDLER_LOC	    "事件处理程序"
	#Define REGEXPLR_RECTYPE_GETEXPR_LOC	    "GETEXPR 封装器"
	#Define REGEXPLR_RECTYPE_EVENTFILTER_LOC	"事件筛选器"
	#Define REGEXPLR_RECTYPE_EXTENDEDIT_LOC	    "运行时扩展编辑器"
	#Define REGEXPLR_RECTYPE_MULTITAB_LOC	    "多选处理程序中的附加页"
	#Define REGEXPLR_RECTYPE_EXTRATAB_LOC	    "事件处理程序中的附加页"
	#Define REGEXPLR_RECTYPE_REGEDIT_LOC	    "生成器注册表编辑器"
	#Define REGEXPLR_RECTYPE_FRXBROWSE_LOC	    "FRX 浏览器"
	#Define REGEXPLR_RECTYPE_METABROWSER_LOC	"成员数据浏览器"
	#Define REGEXPLR_RECTYPE_PROPERTYDEF_LOC	"高级属性定义"
	#Define REGEXPLR_RECTYPE_MULTIPROPDEF_LOC   "多重选择属性定义"

	*--- ReportBuilder NewRegisteredObject() error text:
	#Define UI_NEWREGOBJ_CLASS_LOC			"类；"
	#Define UI_NEWREGOBJ_LIBRARY_LOC		"库："
	#Define UI_NEWREGOBJ_REGTABLE_LOC		"注册表："

	*--- ReportBuilder Options dialog:

	#Define SETUP_CHK_SCREEN_SETTING_LOC	"检查_screen.Report Builder Data.Get（'registry'）以进行会话持久性设置："
	#Define SETUP_CHK_CONFIG_SETTING_LOC	"检查 CONFIG.FPW 是否有 REPORTBUILDER_REGISTRY 设置："
	#Define SETUP_CHK_HOMEDIR_DBF_LOC		"检查主目录中的 'reportbuilder.dbf':"
	#Define SETUP_CHK_PATHDIR_DBF_LOC		"检查当前路径中的 'reportbuilder.dbf':"
	#Define SETUP_CHK_ASKUSER_DBF_LOC		"要求用户查找文件："
	#Define SETUP_CHK_RESULT_EMPTY_LOC		"<空>"
	#Define SETUP_CHK_RESULT_INVALID_LOC	"<无效>"
	#Define SETUP_CHK_RESULT_FOUND_LOC		"找到！"
	#Define SETUP_USING_RESULT_LOC			"使用中 "
	#Define SETUP_USING_INTERNAL_LOC		"内部 lookup 表。"

	#Define USE_COPY_AS_DEFAULT_REGISTRY_LOC "是否要将此副本用作当前配置表？"

	#Define UI_REGISTRY_SEARCH_LOG_LINK_LOC		"此注册表的位置如何？"
	*#define UI_REGISTRY_LOG_UNAVAILABLE_LOC     "(不可用)"
	*#define UI_REGISTRY_LOG_EMPTYVALUE_LOC      "(空)"
	*#define UI_REGISTRY_LOG_FOUND_LOC           "(找到)"
	*#define UI_REGISTRY_LOG_USEINTERNAL_LOC     "(使用内部 lookup 表)"

	*--- Report Header "Other" tab:

	#Define UI_TAB_HDR_OTHER_LOC 				"其他"

	*-- Advanced Tab:

	#Define UI_TAB_ADVANCED_LOC					"高级"

	*--- Document Properties tab:

	#Define UI_TAB_DOCUMENT_PROPERTIES_LOC		 "文档属性"

	#Define UI_ADVPROP_ADD_DLG_CAPTION_LOC       "增加属性"
	#Define UI_ADVPROP_DEL_DLG_CAPTION_LOC       "删除属性"
	#Define UI_ADVPROP_EDT_DLG_CAPTION_LOC       "编辑属性"

	#Define ADVPROP_EDITMODE_GETEXPR_LOC		'表达式'
	#Define ADVPROP_EDITMODE_TEXT_LOC			'文本/XML'
	#Define ADVPROP_EDITMODE_STRING_LOC			'字符串'
	#Define ADVPROP_EDITMODE_GETFILE_LOC		'文件'
	#Define ADVPROP_EDITMODE_BOOLEAN_LOC		'是或否'
	#Define ADVPROP_EDITMODE_DATE_LOC			'日期'

	#Define ADVPROP_BOOLEAN_YES_LOC				"是"
	#Define ADVPROP_BOOLEAN_NO_LOC				"否"

	#Define ADVPROP_ALREADY_DEFINED_LOC         "'{0}' 已经被定义。使用其他的属性名。"
	#Define ADVPROP_DELETE_ARE_YOU_SURE_LOC     "你确定要清除 '{0}' 吗？"
	#Define ADVPROP_EDIT_HELPER_TXT_LOC			"输入文档属性的字符串值。某些属性处理程序可能需要格式良好的 XML 并忽略其他值。"

	#Define UI_ADVPROP_NAME_LOC                  "属性名："
	#Define UI_ADVPROP_VALUE_LOC                 "值："
	#Define UI_ADVPROP_TYPE_LOC                  "类型："

	#Define UI_CMD_CLEAR_LOC					"清理"

	*--- Dynamics Tab:

	#Define UI_CMD_SCRIPT_LOC					"脚本"

	#Define UI_SCRIPTPREVIEW_TITLE_LOC			"动态脚本预览"
	#Define SCRIPTPREVIEW_HELPERTEXT_LOC		"这是将在报表运行时使用以动态呈现报表元素的代码的预览。此处所做的任何更改都不会被保存。"

	#Define UI_DYNAMICS_CONDITIONS_LOC			"条件；"
	#Define UI_DYNAMICS_DEFAULT_LOC			    "<默认>"

	#Define DYNAMICS_HELPER_TEXT_LOC			"动态样式条件将按此处显示的顺序进行计算。"

	#Define DYNAMICS_HELPER_TEXT2_LOC			"按 '脚本' 按钮以预览将要使用的代码。"

	#Define DYNAMICS_HELPER_TEXT3_LOC			"注意: 如果您重新排序了条件, 此处的事例序列将不会反映新的顺序, 直到您通过退出 '属性' 对话框保存更改为止。"

	#Define DYNAMICS_HELPER_TEXT4_LOC			"宽度和高度表达式必须计算为单位为1/960 英寸的值。值-1 将被解释为当前的默认值。"

	#Define DYNAMICS_HELPER_TEXT5_LOC			"测试值的有效性 (范围: 0 到" + Transform(FRX_RUNTIME_LAYOUT_DIMENSION_LIMIT) + ") 并在运行时强制进行整数。"

	#Define DYNAMICS_STORAGE_ERROR_LOC			"成员数据结构结构中没有足够的空间来存储动态信息。"

	#Define DYNAMICS_DELETE_ARE_YOU_SURE_LOC   "你确定要删除 '{0}' 吗？"
	#Define DYNAMICS_NEW_COND_PROMPT_LOC       "输入条件名称："
	#Define DYNAMICS_NEW_COND_TITLE_LOC        "添加动态样式条件"
	#Define DYNAMICS_COND_EXISTS_LOC           "已存在具有该名称的条件。请尝试其他名称。"

	#Define UI_TAB_EVALUATECONTENTS_LOC			"动态"

	#Define UI_DYNAMICS_NAME_LOC				"条件名称："
	#Define UI_DYNAMICS_TEXT_LOC                " 文本 "
	#Define UI_DYNAMICS_EXPR_LOC				"当此条件为 true 时应用："
	#Define UI_DYNAMICS_OVERRIDE_LOC			"将表达式结果替换为:"
	#Define UI_DYNAMICS_DLG_CAPTION_LOC			"配置动态属性"

	#Define UI_DYNAMICS_WIDTH_LOC 				"宽度表达式："
	#Define UI_DYNAMICS_HEIGHT_LOC 				"高度表达式："

	*--- Multiple-selection propertys:

	#Define UI_MULTIPROPS_TITLE_LOC				"检查应将哪些属性应用于所选元素："
	#Define UI_MULTIPROPS_PROPERTY_HEADER_LOC	" 属性"
	#Define UI_MULTIPROPS_VALUE_HEADER_LOC		" 值"


	*--- Object Rotation Panel:

	#Define UI_OBJECT_ROTATION_LOC				" 对象旋转 "

	*--- Miscellaneous or common:

	#Define UI_CMD_EDIT_LOC                     "编辑"
	#Define UI_CMD_CODE_ZOOM_LOC				"代码缩放"

	*--- Handler form context menu:

	#Define UI_CONTEXT_MEMBERDATA_LOC			"对象成员数据"
	#Define UI_CONTEXT_BROWSE_MEMBER_LOC		"浏览..."
	#Define UI_CONTEXT_EDIT_MEMBER_XML_LOC		"编辑 XML..."

	*--- Metadata Browser form:

	#Define UI_METABROWSE_FORM_CAPTION_LOC      "成员数据检查器"

	*--- SetupUtility class:

	#Define LOCATE_REGISTRY_MANUALLY_MSG_LOC	"无法自动定位报表生成器注册表。您想定位它吗？"
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
