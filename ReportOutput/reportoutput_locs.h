#IF Version(3) = [86]
	* locs for REPORTOUTPUT.APP

	#DEFINE OUTPUTAPP_APPNAME_LOC    "VFP 报表输出程序"

	#DEFINE OUTPUTAPP_CONFIGTABLEBROWSE_LOC    "输出配置表"

	#DEFINE OUTPUTAPP_CONFIGTABLEWRONG_LOC     "配置表指定为 " + ;
                                           OUTPUTAPP_APPNAME_LOC + CHR(13) + ;
                                           "未找到或格式错误。" 

	#DEFINE OUTPUTAPP_UNKNOWN_ERROR_LOC       "发生未知错误 " + OUTPUTAPP_APPNAME_LOC
   
#ELSE
	* locs for REPORTOUTPUT.APP

	#DEFINE OUTPUTAPP_APPNAME_LOC    "VFP Report Output Application"

	#DEFINE OUTPUTAPP_CONFIGTABLEBROWSE_LOC    "Output Configuration Table"

	#DEFINE OUTPUTAPP_CONFIGTABLEWRONG_LOC     "Configuration table specified to " + ;
                                           OUTPUTAPP_APPNAME_LOC + CHR(13) + ;
                                           "is not found or is in the wrong format." 

	#DEFINE OUTPUTAPP_UNKNOWN_ERROR_LOC       "An unknown error has occurred in " + OUTPUTAPP_APPNAME_LOC
#ENDIF