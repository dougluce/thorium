// Copyright (c) 2022 Alex313031. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_THORIUM_FLAG_ENTRIES_H_
#define CHROME_BROWSER_THORIUM_FLAG_ENTRIES_H_
    {"force-dark-mode",
     "Enable Dark Mode",
     "Enables Dark Mode for all Thorium instances.",
     kOsDesktop, SINGLE_VALUE_TYPE("force-dark-mode")},
    {"custom-ntp",
     "Custom New Tab Page",
     "Allows setting a custom URL for the New Tab Page (NTP). Value can be internal (e.g. `about:blank`), external (e.g. `example.com`), or local (e.g. `file:///tmp/startpage.html`). This applies for incognito windows as well when not set to a `chrome://` internal page.",
     kOsDesktop, ORIGIN_LIST_VALUE_TYPE("custom-ntp", "")},
    {"hide-sidepanel-button",
     "Hide Side Panel Button",
     "Hides the Thorium Side Panel Button.",
     kOsDesktop, SINGLE_VALUE_TYPE("hide-sidepanel-button")},
     {"no-autoplay",
     "Disable AutoPlay",
     "Disables AutoPlay for all Thorium instances.",
     kOsDesktop, SINGLE_VALUE_TYPE(kNoAutoPlay)},
    {"show-avatar-button",
     "Show/Hide the Avatar Button",
     "Show the Avatar/People/Profile button in the browser toolbar: Always, Incognito|Guest only, or Never.",
     kOsDesktop, MULTI_VALUE_TYPE(kShowAvatarButtonChoices)},
     {"webgl-msaa-sample-count",
     "WebGL MSAA Sample Count",
     "Set a default sample count for WebGL if MSAA is enabled on the GPU.",
     kOsDesktop, MULTI_VALUE_TYPE(kWebglMSAASampleCountChoices)},
     {"gpu-rasterization-msaa-sample-count",
     "Native GPU Rasterization MSAA Sample Count",
     "Set a default sample count for Native GPU Rasterization if MSAA is enabled on the GPU.",
     kOsDesktop, MULTI_VALUE_TYPE(kGpuRasterizationMSAASampleCountChoices)},
     {"num-raster-threads",
     "Number of Raster Threads",
     "Specify the number of worker threads used to rasterize content.",
     kOsDesktop, MULTI_VALUE_TYPE(kNumRasterThreadsChoices)},
     {"enable-ui-devtools",
     "Enable Native UI Inspection in DevTools",
     "Enable Native UI Inspection in DevTools UI. Inspect at `chrome://inspect/#native-ui`",
     kOsDesktop, SINGLE_VALUE_TYPE("enable-ui-devtools")},
#endif  // CHROME_BROWSER_THORIUM_FLAG_ENTRIES_H_
