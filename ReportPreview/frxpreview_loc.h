*=======================================================
* Report Preview localization constants
*=======================================================

#define c_CR	chr(13)
#define c_LF    chr(10)
#define c_CRLF  chr(13)+chr(10)
#define c_CR2	chr(13)+chr(13)
#define c_TAB	chr(9)

*-------------------------------------------------------
* Dialog Captions: 
*-------------------------------------------------------
#define DEFAULT_MBOX_TITLE_LOC      	"报表预览"
#define REPORT_PREVIEW_CAPTION			"报表预览"
#define REPORT_PREVIEW_PAGE_CAPTION     " - 页 "
#define REPORT_PREVIEW_GOTO_PAGE_LOC    "转到页码："
#define TOOLBAR_CAPTION					"打印预览"

*-------------------------------------------------------
* Message box strings: 
*-------------------------------------------------------
#define RP_INVALID_PARAMETERS_LOC		"预览程序被无效参数调用。"
#define RP_INVALID_INITIALIZATION_LOC	"报表预览初始化出现错误。它需要一个报表监听器。"
#define RP_INVALID_PAGE_NUMBER_LOC		"页码必须在范围内 "
#define RP_NO_OUTPUT_PAGES_LOC          "There are no pages available to preview."
#define RP_OUTPUTPAGE_ERROR_LOC         "An exception ocurred invoking .OutputPage():"

*-------------------------------------------------------
* Zoom Level prompts:
*-------------------------------------------------------
#define ZOOM_LEVEL_PROMPT_10_LOC           "10%"
#define ZOOM_LEVEL_PROMPT_25_LOC           "25%"
#define ZOOM_LEVEL_PROMPT_50_LOC           "50%"
#define ZOOM_LEVEL_PROMPT_75_LOC           "75%"
#define ZOOM_LEVEL_PROMPT_100_LOC          "100%"
#define ZOOM_LEVEL_PROMPT_150_LOC          "150%"
#define ZOOM_LEVEL_PROMPT_200_LOC          "200%"
#define ZOOM_LEVEL_PROMPT_300_LOC          "300%"
#define ZOOM_LEVEL_PROMPT_500_LOC          "500%"
#define ZOOM_LEVEL_PROMPT_FIT_WIDTH_LOC    "适合宽度"
#define ZOOM_LEVEL_PROMPT_WHOLE_PAGE_LOC   "整页"

*-------------------------------------------------------
* Context menu prompts:
*-------------------------------------------------------
#define CONTEXT_MENU_PROMPT_FIRST_PAGE_LOC         "首页"
#define CONTEXT_MENU_PROMPT_PREVIOUS_LOC           "上一页"
#define CONTEXT_MENU_PROMPT_NEXT_LOC               "下一页"
#define CONTEXT_MENU_PROMPT_LAST_PAGE_LOC          "末页"
#define CONTEXT_MENU_PROMPT_GO_TO_PAGE_LOC         "转到页面..."
#define CONTEXT_MENU_PROMPT_ZOOM_LOC               "缩放"
#define CONTEXT_MENU_PROMPT_PAGES_TO_DISPLAY_LOC   "显示方式"
#define CONTEXT_MENU_PROMPT_TOOLBAR_LOC            "工具栏"
#define CONTEXT_MENU_PROMPT_PRINT_LOC              "打印"
#define CONTEXT_MENU_PROMPT_CLOSE_LOC              "关闭"
#define CONTEXT_MENU_PROMPT_INFODEBUG_LOC          "关于..."
#define CONTEXT_MENU_PROMPT_1PAGE_LOC              "1 页"
#define CONTEXT_MENU_PROMPT_2PAGES_LOC             "2 页"
#define CONTEXT_MENU_PROMPT_4PAGES_LOC             "4 页"

*-------------------------------------------------------
* UI control captions (not already LOC'd) :
*-------------------------------------------------------
#define USE_LOC_STRINGS_IN_UI				.F.    && Set this .T. to enable these LOC strings in UI controls

#define UI_CMD_OK_LOC						"确定"
#define UI_CMD_CANCEL_LOC					"取消"

#define UI_TOOLBAR_GOTOPAGE_LOC				"转到页面"
#define UI_TOOLBAR_CLOSE_LOC				"关闭"
#define UI_TOOLBAR_PRINT_LOC				"打印"

#define UI_TOOLBAR_TT_FIRST_LOC				"首页"
#define UI_TOOLBAR_TT_BACK_LOC				"上一页"
#define UI_TOOLBAR_TT_GOTOPAGE_LOC			"转到页面"
#define UI_TOOLBAR_TT_NEXT_LOC				"下一页"
#define UI_TOOLBAR_TT_LAST_LOC				"末页"
#define UI_TOOLBAR_TT_ZOOMLEVEL_LOC			"选择页面缩放"
#define UI_TOOLBAR_TT_1PAGE_LOC				"1 页"
#define UI_TOOLBAR_TT_2PAGES_LOC			"2 页"
#define UI_TOOLBAR_TT_4PAGES_LOC			"4 页"
#define UI_TOOLBAR_TT_CLOSE_LOC				"关闭预览窗口"
#define UI_TOOLBAR_TT_PRINT_LOC				"打印报表"