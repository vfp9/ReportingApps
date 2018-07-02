#IF Version(3) = [86]
	* locs for VCX super-classes

	#DEFINE OUTPUTCLASS_APPNAME_LOC              "VFP 报表输出类"

	#DEFINE OUTPUTCLASS_CONFIGTABLECREATED_LOC     "配置表 "+ m.lcDBF + " 已被创建。"
	* or, if you prefer:    "has been written to disk."

	#DEFINE OUTPUTCLASS_CONFIGTABLEWRONG_LOC     "配置表格式不正确。"

	* this is different from XML because in the XML class they
	* are used in SEEK() and require specific tagnames, whereas
	* the superclasses just require certain indexes for optimizing LOCATES,

	#DEFINE OUTPUTCLASS_CONFIGINDEXMISSING_LOC   "配置表丢失 "+ CHR(13) + ;
                                             "一个或多个必需的索引。"

	#DEFINE OUTPUTCLASS_INITSTATUS_LOC           "初始化... "
	#DEFINE OUTPUTCLASS_PREPSTATUS_LOC           "运行计算已准备就绪... "
	#DEFINE OUTPUTCLASS_RUNSTATUS_LOC            "正在创建输出... "
	#DEFINE OUTPUTCLASS_TIME_SECONDS_LOC         SPACE(1) + "秒(s)"
	#DEFINE OUTPUTCLASS_CANCEL_INSTRUCTIONS_LOC  "点击 ESC 键取消... "
	#DEFINE OUTPUTCLASS_REPORT_CANCELQUERY_LOC   "停止报表执行？"+CHR(13) + ;
                                             "(如果按“否”，报表执行将继续。)"
	#DEFINE OUTPUTCLASS_REPORT_INCOMPLETE_LOC    "报表执行被取消。" + CHR(13) + ;
                                             "你的结果不完整。"

	#DEFINE OUTPUTCLASS_SUCCESS_LOC              THIS.AppName+" 创建你的报表为"+;
                                             CHR(13)+THIS.TargetFileName+"." + CHR(13) + ;
                                             IIF(THIS.AllowModalMessages,;
                                              "按'是'进行存储" + CHR(13) + ;
                                             "这个文件名在剪贴板中。","")

	#DEFINE OUTPUTCLASS_NOFILECREATE_LOC         "文件 " + THIS.TargetFileName+" 不能被创建。"

	#DEFINE OUTPUTCLASS_CREATEERRORS_LOC         THIS.AppName+" 创建你的报表为"+ ;
                                             CHR(13)+THIS.TargetFileName+". "+CHR(13)+ ;
                                             "但是，处理期间发生错误。" + CHR(13) + ;
                                             OUTPUTCLASS_REPORT_INCOMPLETE_LOC
	#DEFINE OUTPUTCLASS_PAGELIMIT_LOC            "您的报告超出了特定的页面限制 (" + ;
                                             TRANSFORM(THIS.PageLimit) + "). " + CHR(13) + ;
                                             OUTPUTCLASS_REPORT_INCOMPLETE_LOC   
                                                                                                                                    
                                             
                                             

	#DEFINE OUTPUTCLASS_NOCREATE_LOC             THIS.AppName +" 不能创建你的报表。"
 
	#DEFINE OUTPUTCLASS_ERRNOLABEL_LOC           "错误:           "
	#DEFINE OUTPUTCLASS_ERRPROCLABEL_LOC         "方法:       "
	#DEFINE OUTPUTCLASS_ERRLINELABEL_LOC         "行:            " 

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

	#DEFINE OUTPUTXML_APPNAME_LOC               "XML 监听器"

	#DEFINE OUTPUTXML_CONFIGTAGMISSING_LOC      "至少缺少一个必需的索引标记 "+ CHR(13) + ;
                                            "在配置表中。"

	#DEFINE OUTPUTXML_FRXMISSING_LOC            "所需的FRX游标不可用。" 
   
   
	#DEFINE OUTPUTXML_FRXCURSOR_MISSING_LOC     "FRX 游标助手对象不能被发现 " + CHR(13)+ ;
                                            "_FRXCURSOR.VCX, "+CHR(13)+ ; 
                                            "_REPORTOUTPUT." + CHR(13) + CHR(13)+ ;
                                            "此类的某些功能可能不能使用。"   

	* locs for XML Display Listener Class:

	#DEFINE OUTPUTXMLDISPLAY_APPNAME_LOC        "XML 显示监听器"

	* locs for HTML:

	#DEFINE OUTPUTHTML_APPNAME_LOC              "HTML 监听器"

	*&* Sedna


	* locs for UtilityReportListener (File-based options)
	#DEFINE OUTPUTFILE_APPNAME_LOC              "文件输出监听器"
	#DEFINE OUTPUTFILE_NOIMAGEFILES_LOC         "您已要求生成页面图像文件， " + CHR(13) + ;
                                            "但是此报表运行不在当前支持的模式下 " + CHR(13) + ;
                                            "此功能。" + CHR(13) + CHR(13) + ;
                                            "您的主输出文件将在没有它们的情况下生成。"
                                            
	* Sedna loc for HTML Listener

	#DEFINE OUTPUTHTML_NOIMAGEFILES_LOC         "您的报告包含一个或多个布局元素 " + CHR(13) + ;
                                            "被指定为页面图像的链接， " + CHR(13) +;
                                            "但这份报表运行不在这种模式下 " + CHR(13) + ;
                                            "目前支持这个功能。" + CHR(13) + CHR(13) + ;
                                            "您的主输出文件将在没有它们的情况下生成。"


	* locs for FXListener

	#DEFINE OUTPUTFX_APPNAME_LOC                  "FX-Update 监听器"

	#DEFINE OUTPUTFX_USERFEEDBACK_UNAVAILABLE_LOC  "在期间显示反馈的类 " + CHR(13)  + ;
                                               "报告生成过程不可用。" + CHR(13) + CHR(13) + ;
                                               "报告运行将继续静默。"

	#DEFINE OUTPUTFX_SCRIPTING_UNAVAILABLE_LOC      "在报表生成过程中 " + CHR(13)  + ;
                                               "处理脚本的类不可用。" + CHR(13) + CHR(13) + ;
                                               "报表运行可能无法提供预期的动态行为。"

	#DEFINE OUTPUTFX_ROTATION_UNAVAILABLE_LOC      "在报告生成过程中" + CHR(13)  + ;
                                               "处理旋转的类不可用。 " + CHR(13) + CHR(13) + ;
                                               "报表布局控件不会旋转。"

	#DEFINE OUTPUTFX_CONDITIONALRENDERING_UNAVAILABLE_LOC "报告生成过程中处理条件呈现的类" + CHR(13)  + ;
                                               "或行为在此运行期间不可用。 " + CHR(13) + CHR(13) + ;
                                               "某些报表布局控件可能会在输出中意外出现。"                                               

	#DEFINE OUTPUTFX_REQUIREDOBJECT_UNAVAILABLE_LOC "所需的助手对象不可用。" + CHR(13)  + ;
                                               "类: " + tcClass + " 类库: " + tcClassLib + CHR(13) + CHR(13) + ;
                                               "此报表运行可能会遗漏一些功能，" + CHR(13) + ;
                                               "或者它可能无法成功结束。"

	#DEFINE OUTPUTFX_REQUIREDOBJECTDEF_MISSING_LOC  "未定义所需的帮助程序对象。" + CHR(13)  + CHR(13) + ;
                                                   "此报表运行可能会遗漏一些功能，" + CHR(13) + ;
                                                   "或者它可能无法成功结束。"
                                               
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
                                               
