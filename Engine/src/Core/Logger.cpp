/*
Copyright (C) 2023 Andrew Crane andrew.crane2802@gmail.com

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

		http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include "Logger.h"

namespace Titan
{
	std::shared_ptr<spdlog::logger> Logger::engineLogger;
	std::shared_ptr<spdlog::logger> Logger::applicationLogger;

	void Logger::Init()
	{
		spdlog::set_pattern("[%D][%T]%^ %n: %l: %v%$");

		engineLogger = spdlog::stdout_color_mt("ENGINE");
		engineLogger->set_level(spdlog::level::trace);

		applicationLogger = spdlog::stdout_color_mt("APP");
		applicationLogger->set_level(spdlog::level::trace);
	}
}

