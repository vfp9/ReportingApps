#IF Version(3) = [86]
	* locs for VCX super-classes

	#DEFINE OUTPUTCLASS_APPNAME_LOC              "VFP ���������"

	#DEFINE OUTPUTCLASS_CONFIGTABLECREATED_LOC     "���ñ� "+ m.lcDBF + " �ѱ�������"
	* or, if you prefer:    "has been written to disk."

	#DEFINE OUTPUTCLASS_CONFIGTABLEWRONG_LOC     "���ñ��ʽ����ȷ��"

	* this is different from XML because in the XML class they
	* are used in SEEK() and require specific tagnames, whereas
	* the superclasses just require certain indexes for optimizing LOCATES,

	#DEFINE OUTPUTCLASS_CONFIGINDEXMISSING_LOC   "���ñ�ʧ "+ CHR(13) + ;
                                             "һ�����������������"

	#DEFINE OUTPUTCLASS_INITSTATUS_LOC           "��ʼ��... "
	#DEFINE OUTPUTCLASS_PREPSTATUS_LOC           "���м�����׼������... "
	#DEFINE OUTPUTCLASS_RUNSTATUS_LOC            "���ڴ������... "
	#DEFINE OUTPUTCLASS_TIME_SECONDS_LOC         SPACE(1) + "��(s)"
	#DEFINE OUTPUTCLASS_CANCEL_INSTRUCTIONS_LOC  "��� ESC ��ȡ��... "
	#DEFINE OUTPUTCLASS_REPORT_CANCELQUERY_LOC   "ֹͣ����ִ�У�"+CHR(13) + ;
                                             "(��������񡱣�����ִ�н�������)"
	#DEFINE OUTPUTCLASS_REPORT_INCOMPLETE_LOC    "����ִ�б�ȡ����" + CHR(13) + ;
                                             "��Ľ����������"

	#DEFINE OUTPUTCLASS_SUCCESS_LOC              THIS.AppName+" ������ı���Ϊ"+;
                                             CHR(13)+THIS.TargetFileName+"." + CHR(13) + ;
                                             IIF(THIS.AllowModalMessages,;
                                              "��'��'���д洢" + CHR(13) + ;
                                             "����ļ����ڼ������С�","")

	#DEFINE OUTPUTCLASS_NOFILECREATE_LOC         "�ļ� " + THIS.TargetFileName+" ���ܱ�������"

	#DEFINE OUTPUTCLASS_CREATEERRORS_LOC         THIS.AppName+" ������ı���Ϊ"+ ;
                                             CHR(13)+THIS.TargetFileName+". "+CHR(13)+ ;
                                             "���ǣ������ڼ䷢������" + CHR(13) + ;
                                             OUTPUTCLASS_REPORT_INCOMPLETE_LOC
	#DEFINE OUTPUTCLASS_PAGELIMIT_LOC            "���ı��泬�����ض���ҳ������ (" + ;
                                             TRANSFORM(THIS.PageLimit) + "). " + CHR(13) + ;
                                             OUTPUTCLASS_REPORT_INCOMPLETE_LOC   
                                                                                                                                    
                                             
                                             

	#DEFINE OUTPUTCLASS_NOCREATE_LOC             THIS.AppName +" ���ܴ�����ı���"
 
	#DEFINE OUTPUTCLASS_ERRNOLABEL_LOC           "����:           "
	#DEFINE OUTPUTCLASS_ERRPROCLABEL_LOC         "����:       "
	#DEFINE OUTPUTCLASS_ERRLINELABEL_LOC         "��:            " 

	* the following loc is eval'd for updateListener's actual progress bar message.  
	* In most cases,
	* changing this value is overkill, as the localizable portions of
	* the message are already localized as separate properties.
	* All the status messagse as well as the therm caption can
	* also be set at runtime without touching the locs.
	* Sedna change: remove INT() from PercentDone, remove * 100, and use ThermPrecision:
	#DEFINE OUTPUTCLASS_THERMCAPTION_LOC        [m.cMessage+ " "+ ] + ;
                                            [TRANSFORM(THIS.PercentDone,"999"+ ] + ;
                                            [IIF(THIS.ThermPrecision=0,"","."+REPL("9",THIS.ThermPrecision))) + "%" ] + ;
                                            [+ IIF(NOT THIS.IncludeSeconds, "" , " "+] + ;
                                            [TRANSFORM(IIF(THIS.IsRunning,DATETIME(), THIS.ReportStopRunDateTime)-] + ;
                                            [THIS.ReportStartRunDateTime)+" " + THIS.SecondsText)]


	* locs for XML Listener class:

	#DEFINE OUTPUTXML_APPNAME_LOC               "XML ������"

	#DEFINE OUTPUTXML_CONFIGTAGMISSING_LOC      "����ȱ��һ�������������� "+ CHR(13) + ;
                                            "�����ñ��С�"

	#DEFINE OUTPUTXML_FRXMISSING_LOC            "�����FRX�α겻���á�" 
   
   
	#DEFINE OUTPUTXML_FRXCURSOR_MISSING_LOC     "FRX �α����ֶ����ܱ����� " + CHR(13)+ ;
                                            "_FRXCURSOR.VCX, "+CHR(13)+ ; 
                                            "_REPORTOUTPUT." + CHR(13) + CHR(13)+ ;
                                            "�����ĳЩ���ܿ��ܲ���ʹ�á�"   

	* locs for XML Display Listener Class:

	#DEFINE OUTPUTXMLDISPLAY_APPNAME_LOC        "XML ��ʾ������"

	* locs for HTML:

	#DEFINE OUTPUTHTML_APPNAME_LOC              "HTML ������"

	*&* Sedna


	* locs for UtilityReportListener (File-based options)
	#DEFINE OUTPUTFILE_APPNAME_LOC              "�ļ����������"
	#DEFINE OUTPUTFILE_NOIMAGEFILES_LOC         "����Ҫ������ҳ��ͼ���ļ��� " + CHR(13) + ;
                                            "���Ǵ˱������в��ڵ�ǰ֧�ֵ�ģʽ�� " + CHR(13) + ;
                                            "�˹��ܡ�" + CHR(13) + CHR(13) + ;
                                            "����������ļ�����û�����ǵ���������ɡ�"
                                            
	* Sedna loc for HTML Listener

	#DEFINE OUTPUTHTML_NOIMAGEFILES_LOC         "���ı������һ����������Ԫ�� " + CHR(13) + ;
                                            "��ָ��Ϊҳ��ͼ������ӣ� " + CHR(13) +;
                                            "����ݱ������в�������ģʽ�� " + CHR(13) + ;
                                            "Ŀǰ֧��������ܡ�" + CHR(13) + CHR(13) + ;
                                            "����������ļ�����û�����ǵ���������ɡ�"


	* locs for FXListener

	#DEFINE OUTPUTFX_APPNAME_LOC                  "FX-Update ������"

	#DEFINE OUTPUTFX_USERFEEDBACK_UNAVAILABLE_LOC  "���ڼ���ʾ�������� " + CHR(13)  + ;
                                               "�������ɹ��̲����á�" + CHR(13) + CHR(13) + ;
                                               "�������н�������Ĭ��"

	#DEFINE OUTPUTFX_SCRIPTING_UNAVAILABLE_LOC      "�ڱ������ɹ����� " + CHR(13)  + ;
                                               "����ű����಻���á�" + CHR(13) + CHR(13) + ;
                                               "�������п����޷��ṩԤ�ڵĶ�̬��Ϊ��"

	#DEFINE OUTPUTFX_ROTATION_UNAVAILABLE_LOC      "�ڱ������ɹ�����" + CHR(13)  + ;
                                               "������ת���಻���á� " + CHR(13) + CHR(13) + ;
                                               "�����ֿؼ�������ת��"

	#DEFINE OUTPUTFX_CONDITIONALRENDERING_UNAVAILABLE_LOC "�������ɹ����д����������ֵ���" + CHR(13)  + ;
                                               "����Ϊ�ڴ������ڼ䲻���á� " + CHR(13) + CHR(13) + ;
                                               "ĳЩ�����ֿؼ����ܻ��������������֡�"                                               

	#DEFINE OUTPUTFX_REQUIREDOBJECT_UNAVAILABLE_LOC "��������ֶ��󲻿��á�" + CHR(13)  + ;
                                               "��: " + tcClass + " ���: " + tcClassLib + CHR(13) + CHR(13) + ;
                                               "�˱������п��ܻ���©һЩ���ܣ�" + CHR(13) + ;
                                               "�����������޷��ɹ�������"

	#DEFINE OUTPUTFX_REQUIREDOBJECTDEF_MISSING_LOC  "δ��������İ����������" + CHR(13)  + CHR(13) + ;
                                                   "�˱������п��ܻ���©һЩ���ܣ�" + CHR(13) + ;
                                                   "�����������޷��ɹ�������"
                                               
	* locs for FX and GFX objects

#ELSE
	* locs for VCX super-classes

	#DEFINE OUTPUTCLASS_APPNAME_LOC              "VFP Report Output Class"

	#DEFINE OUTPUTCLASS_CONFIGTABLECREATED_LOC     "Configuration table "+ m.lcDBF + " was created."
	* or, if you prefer:    "has been written to disk."

	#DEFINE OUTPUTCLASS_CONFIGTABLEWRONG_LOC     "Configuration table is not in correct format."

	* this is different from XML because in the XML class they
	* are used in SEEK() and require specific tagnames, whereas
	* the superclasses just require certain indexes for optimizing LOCATES,

	#DEFINE OUTPUTCLASS_CONFIGINDEXMISSING_LOC   "Configuration table is missing "+ CHR(13) + ;
                                             "one or more required indexes."

	#DEFINE OUTPUTCLASS_INITSTATUS_LOC           "Initializing... "
	#DEFINE OUTPUTCLASS_PREPSTATUS_LOC           "Running calculation prepass... "
	#DEFINE OUTPUTCLASS_RUNSTATUS_LOC            "Creating output... "
	#DEFINE OUTPUTCLASS_TIME_SECONDS_LOC         SPACE(1) + "sec(s)"
	#DEFINE OUTPUTCLASS_CANCEL_INSTRUCTIONS_LOC  "Press Esc to cancel... "
	#DEFINE OUTPUTCLASS_REPORT_CANCELQUERY_LOC   "Stop report execution?"+CHR(13) + ;
                                             "(If you press 'No', report execution will continue.)"
	#DEFINE OUTPUTCLASS_REPORT_INCOMPLETE_LOC    "Report execution was cancelled." + CHR(13) + ;
                                             "Your results are not complete."

	#DEFINE OUTPUTCLASS_SUCCESS_LOC              THIS.AppName+" created your report as"+;
                                             CHR(13)+THIS.TargetFileName+"." + CHR(13) + ;
                                             IIF(THIS.AllowModalMessages,;
                                              "Press 'Yes' to store" + CHR(13) + ;
                                             "this filename in the Clipboard.","")

	#DEFINE OUTPUTCLASS_NOFILECREATE_LOC         "File " + THIS.TargetFileName+" cannot be created."

	#DEFINE OUTPUTCLASS_CREATEERRORS_LOC         THIS.AppName+" created your report as"+ ;
                                             CHR(13)+THIS.TargetFileName+". "+CHR(13)+ ;
                                             "However, an error occurred during processing." + CHR(13) + ;
                                             OUTPUTCLASS_REPORT_INCOMPLETE_LOC
	#DEFINE OUTPUTCLASS_PAGELIMIT_LOC            "Your report exceeded a specified page limit (" + ;
                                             TRANSFORM(THIS.PageLimit) + "). " + CHR(13) + ;
                                             OUTPUTCLASS_REPORT_INCOMPLETE_LOC   
                                                                                                                                    
                                             
                                             

	#DEFINE OUTPUTCLASS_NOCREATE_LOC             THIS.AppName +" was not able to create your report."
 
	#DEFINE OUTPUTCLASS_ERRNOLABEL_LOC           "Error:           "
	#DEFINE OUTPUTCLASS_ERRPROCLABEL_LOC         "Method:       "
	#DEFINE OUTPUTCLASS_ERRLINELABEL_LOC         "Line:            " 

	* the following loc is eval'd for updateListener's actual progress bar message.  
	* In most cases,
	* changing this value is overkill, as the localizable portions of
	* the message are already localized as separate properties.
	* All the status messagse as well as the therm caption can
	* also be set at runtime without touching the locs.
	* Sedna change: remove INT() from PercentDone, remove * 100, and use ThermPrecision:
	#DEFINE OUTPUTCLASS_THERMCAPTION_LOC        [m.cMessage+ " "+ ] + ;
                                            [TRANSFORM(THIS.PercentDone,"999"+ ] + ;
                                            [IIF(THIS.ThermPrecision=0,"","."+REPL("9",THIS.ThermPrecision))) + "%" ] + ;
                                            [+ IIF(NOT THIS.IncludeSeconds, "" , " "+] + ;
                                            [TRANSFORM(IIF(THIS.IsRunning,DATETIME(), THIS.ReportStopRunDateTime)-] + ;
                                            [THIS.ReportStartRunDateTime)+" " + THIS.SecondsText)]


	* locs for XML Listener class:

	#DEFINE OUTPUTXML_APPNAME_LOC               "XML Listener"

	#DEFINE OUTPUTXML_CONFIGTAGMISSING_LOC      "At least one required index tag is missing "+ CHR(13) + ;
                                            "from the configuration table."

	#DEFINE OUTPUTXML_FRXMISSING_LOC            "Required FRX cursor is not available." 
   
   
	#DEFINE OUTPUTXML_FRXCURSOR_MISSING_LOC     "FRX cursor helper object cannot be found in " + CHR(13)+ ;
                                            "_FRXCURSOR.VCX, "+CHR(13)+ ; 
                                            "_REPORTOUTPUT." + CHR(13) + CHR(13)+ ;
                                            "Some features of this class may not be active."   

	* locs for XML Display Listener Class:

	#DEFINE OUTPUTXMLDISPLAY_APPNAME_LOC        "XML Display Listener"

	* locs for HTML:

	#DEFINE OUTPUTHTML_APPNAME_LOC              "HTML Listener"

	*&* Sedna


	* locs for UtilityReportListener (File-based options)
	#DEFINE OUTPUTFILE_APPNAME_LOC              "FileOutput Listener"
	#DEFINE OUTPUTFILE_NOIMAGEFILES_LOC         "You have asked for page image files to be generated, " + CHR(13) + ;
                                            "but this report run is not in a mode that currently supports " + CHR(13) + ;
                                            "this feature." + CHR(13) + CHR(13) + ;
                                            "Your main output file will be generated without them."
                                            
	* Sedna loc for HTML Listener

	#DEFINE OUTPUTHTML_NOIMAGEFILES_LOC         "Your report contains one or more layout elements " + CHR(13) + ;
                                            "designated as links to page images, " + CHR(13) +;
                                            "but this report run is not in a mode that " + CHR(13) + ;
                                            "currently supports this feature." + CHR(13) + CHR(13) + ;
                                            "Your main output file will be generated without them."


	* locs for FXListener

	#DEFINE OUTPUTFX_APPNAME_LOC                  "FX-Update Listener"

	#DEFINE OUTPUTFX_USERFEEDBACK_UNAVAILABLE_LOC  "Class to display feedback during " + CHR(13)  + ;
                                               "report generation process is not available." + CHR(13) + CHR(13) + ;
                                               "Report run will continue silently."

	#DEFINE OUTPUTFX_SCRIPTING_UNAVAILABLE_LOC      "Class to handle scripting during " + CHR(13)  + ;
                                               "report generation process is not available." + CHR(13) + CHR(13) + ;
                                               "Report run may not provide expected dynamic behavior."

	#DEFINE OUTPUTFX_ROTATION_UNAVAILABLE_LOC      "Class to handle rotation during " + CHR(13)  + ;
                                               "report generation process is not available." + CHR(13) + CHR(13) + ;
                                               "Report layout controls will not rotate."

	#DEFINE OUTPUTFX_CONDITIONALRENDERING_UNAVAILABLE_LOC "Class or behavior to handle conditional rendering during " + CHR(13)  + ;
                                               "report generation process is not available during this run." + CHR(13) + CHR(13) + ;
                                               "Some report layout controls may appear unexpectedly in the output."                                               

	#DEFINE OUTPUTFX_REQUIREDOBJECT_UNAVAILABLE_LOC "A required helper object is not available." + CHR(13)  + ;
                                               "Class: " + tcClass + " Library: " + tcClassLib + CHR(13) + CHR(13) + ;
                                               "This report run may be missing some features," + CHR(13) + ;
                                               "or it may not conclude successfully."

	#DEFINE OUTPUTFX_REQUIREDOBJECTDEF_MISSING_LOC  "A required helper object is not defined." + CHR(13)  + CHR(13) + ;
                                                   "This report run may be missing some features," + CHR(13) + ;
                                                   "or it may not conclude successfully."
                                               
	* locs for FX and GFX objects
#ENDIF
                                               
