--- ui/base/resource/resource_bundle.cc.orig	2022-10-05 07:34:01 UTC
+++ ui/base/resource/resource_bundle.cc
@@ -884,7 +884,7 @@ void ResourceBundle::ReloadFonts() {
 }
 
 ResourceScaleFactor ResourceBundle::GetMaxResourceScaleFactor() const {
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   return max_scale_factor_;
 #else
   return GetSupportedResourceScaleFactors().back();
