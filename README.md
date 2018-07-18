# Reporting Apps

**xinjie 翻译于 2018.07.03**

**鸣谢：[龙岩耐思](http://www.fjlynice.com/)**

Visual FoxPro 9 的报表默认使用的应用程序。 包括报表输出引擎，预览容器和默认的报表生成器应用程序，以及报表设计器事件处理程序的框架。

包括以下应用程序的完整源代码:

* ReportBuilder.APP

* ReportOutput.APP

* ReportPreview.APP

**2018.07.03 释放**
修改了 .H 文件。通过编辑 .H 文件可增加多语钟支持。
Now, you can compile your native version of the app and just edit .H file.

**2014.07.04 释放**  
此版本修复了ReportOutput.app和ReportBuilder.app中的错误，该错误无法正确处理更高的DPI显示（感谢Joel Leach）。

**2013.03.09 释放**  
此版本修复了Report Builder.APP中的一些可视错误; 参阅 <a href="http://doughennig.blogspot.ca/2013/03/a-couple-more-report-designer-bug-fixes.html" target="_blank">http://doughennig.blogspot.ca/2013/03/a-couple-more-report-designer-bug-fixes.html</a>. 它还修复了以下链接中描述的 "SET TALK" bug 描述<a href="http://cathypountney.blogspot.com/2009/04/set-talk-appears-to-be-on-when-running.html" target="_blank">http://cathypountney.blogspot.com/2009/04/set-talk-appears-to-be-on-when-running.html</a>.

**2012.10.30 释放**  
此版本修复了Report Builder.APP中的两个错误。 详情参阅 <a href="http://doughennig.blogspot.ca/2012/09/fixing-another-report-designer-issue.html" target="_blank">http://doughennig.blogspot.ca/2012/09/fixing-another-report-designer-issue.html</a> 和 <a href="http://doughennig.blogspot.ca/2012/10/fixing-yet-another-report-designer-issue.html" target="_blank">http://doughennig.blogspot.ca/2012/10/fixing-yet-another-report-designer-issue.html</a>。

**2012.02.05 释放**  
此版本修复了Report Builder.APP中的两个错误。 详情参阅 <a href="http://doughennig.blogspot.com/2012/02/updating-vfpx-reportbuilderapp.html" target="_blank">http://doughennig.blogspot.com/2012/02/updating-vfpx-reportbuilderapp.html</a>。

**2009.05.25 释放**  
此版本提高了程序的性能。当使用 SP2 新的特性（旋转、动态颜色等）时，程序做了一些更改以限制额外的开销。进度条也被限制了更新的次数。最终结果是当使用进度条或在报表控件上使用新的动态/高级特性时，输出速度提高 20% - 400% 。

ReportOutput 性能：更改了Therm bar，每隔0.3秒更新一次，而不是每个细节带区。

性能：更改了FX和GFX处理程序，以限制从Render和Evaluate Contents事件中调用ApplyFX。

增强功能：向报表侦听器添加了oFRX集合属性，以便更轻松地访问基础报表文件（is：This.oFRX（nFRXRecNo）.expr）

Reporting Apps 是 [XSource](https://github.com/VFPX/XSource) 的组成部分, 它包括了各种 Visual FoxPro 组件的源文件。 XSource 的许可协议可以在所有 XSource 版本中包含的 XSource EULA.txt 中找到。
