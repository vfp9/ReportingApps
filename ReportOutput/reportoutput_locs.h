#IF Version(3) = [86]
	* locs for REPORTOUTPUT.APP

	#DEFINE OUTPUTAPP_APPNAME_LOC    "VFP �����������"

	#DEFINE OUTPUTAPP_CONFIGTABLEBROWSE_LOC    "������ñ�"

	#DEFINE OUTPUTAPP_CONFIGTABLEWRONG_LOC     "���ñ�ָ��Ϊ " + ;
                                           OUTPUTAPP_APPNAME_LOC + CHR(13) + ;
                                           "δ�ҵ����ʽ����" 

	#DEFINE OUTPUTAPP_UNKNOWN_ERROR_LOC       "����δ֪���� " + OUTPUTAPP_APPNAME_LOC
   
#ELSE
	* locs for REPORTOUTPUT.APP

	#DEFINE OUTPUTAPP_APPNAME_LOC    "VFP Report Output Application"

	#DEFINE OUTPUTAPP_CONFIGTABLEBROWSE_LOC    "Output Configuration Table"

	#DEFINE OUTPUTAPP_CONFIGTABLEWRONG_LOC     "Configuration table specified to " + ;
                                           OUTPUTAPP_APPNAME_LOC + CHR(13) + ;
                                           "is not found or is in the wrong format." 

	#DEFINE OUTPUTAPP_UNKNOWN_ERROR_LOC       "An unknown error has occurred in " + OUTPUTAPP_APPNAME_LOC
#ENDIF