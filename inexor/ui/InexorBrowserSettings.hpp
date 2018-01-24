
#pragma once

#include "include/cef_app.h"

namespace inexor {
namespace ui {

class InexorBrowserSettings : public CefBrowserSettings {
    public:
        InexorBrowserSettings() {
            windowless_frame_rate = 60;
            file_access_from_file_urls = STATE_DISABLED;
            plugins = STATE_DISABLED;
            webgl = STATE_DISABLED;
            // caret_browsing = STATE_DISABLED; // not availaible in newer CEF anymore
            javascript = STATE_ENABLED;
            javascript_access_clipboard = STATE_ENABLED;
            javascript_dom_paste = STATE_ENABLED;
        };
};

}
}
