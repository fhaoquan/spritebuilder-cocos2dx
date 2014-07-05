/*
 * SpriteBuilder: http://www.spritebuilder.org
 *
 * Copyright (c) 2013 Apportable Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#pragma once
#include "CCBEnum.h"

NS_CCB_BEGIN
#define CCBLocalize(key) \
LocalizationManager::getInstance()->getLocalizedStringForKey(key)

class LocalizationManager {
public:
	typedef std::map<std::string, std::string> Translation;
	
	std::map<std::string, Translation> translations;
	std::vector<std::string> activeLanguage;
	std::string language;
public:
	static LocalizationManager * getInstance();
	
	void loadStringsFile(const std::string &file);
	
	const std::string & getLocalizedStringForKey(const std::string &key) const;
};
NS_CCB_END
