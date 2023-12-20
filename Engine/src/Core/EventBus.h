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

#pragma once

#include <eventpp/eventqueue.h>

#include "Core.h"

namespace Titan
{
	class TITAN_API EventSystem
	{
	public:
		enum EventType
		{
			Mouse,
			Keyboard,
			ChangedState
		};

		eventpp::EventQueue<std::string, void(std::string data)> queue;

		eventpp::EventQueue<std::string, void(std::string data)> getQueue()
		{
			return queue;
		}

		void Update()
		{
			queue.process();
		}
	};
}