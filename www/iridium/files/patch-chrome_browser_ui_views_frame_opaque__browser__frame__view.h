--- chrome/browser/ui/views/frame/opaque_browser_frame_view.h.orig	2022-10-05 07:34:01 UTC
+++ chrome/browser/ui/views/frame/opaque_browser_frame_view.h
@@ -226,7 +226,7 @@ class OpaqueBrowserFrameView : public BrowserNonClient
   // Background painter for the window frame.
   std::unique_ptr<views::FrameBackground> frame_background_;
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   std::unique_ptr<views::MenuRunner> menu_runner_;
 #endif
 
