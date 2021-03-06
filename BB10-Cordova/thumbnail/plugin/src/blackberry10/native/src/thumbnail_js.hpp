/*
 * Copyright (c) 2012-2014 BlackBerry Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef THUMBNAIL_JS_HPP_
#define THUMBNAIL_JS_HPP_
#include <img/img.h>
#include <string>
#include "thumbnail_ndk.hpp"
#include "../public/plugin.h"
#include "Logger.hpp"

class ThumbnailJS: public JSExt {

public:
    explicit ThumbnailJS(const std::string& id);
    virtual ~ThumbnailJS();

// Interfaces of JSExt
    virtual bool CanDelete();
    virtual std::string InvokeMethod(const std::string& command);
    void NotifyEvent(const std::string& event);
    webworks::Logger* getLog();

private:
    std::string m_id;
    // Definition of a pointer to the actual native extension code
    webworks::ThumbnailNDK *m_pTemplateController;
    webworks::Logger *m_pLogger;
};

#endif /* THUMBNAIL_JS_HPP_ */
