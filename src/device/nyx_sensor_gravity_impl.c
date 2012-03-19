/* @@@LICENSE
*
*      Copyright (c) 2010-2012 Hewlett-Packard Development Company, L.P.
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
*
* LICENSE@@@ */

/**
 *******************************************************************************
 * @file nyx_sensor_gravity_impl.c
 *
 * @brief implementation of NYX's public API for accessing gravity
 * device and events it generates.
 *
 *******************************************************************************
 */

#include "nyx_device_impl.h"
#include <nyx/module/nyx_device_internal.h>


nyx_error_t nyx_sensor_gravity_event_get_item(nyx_event_handle_t handle, nyx_sensor_gravity_event_item_t *event_out_ptr)
{
	nyx_event_t* e = (nyx_event_t*)handle;
	CHECK_EVENT(e);
	CHECK_EVENT_TYPE(e, NYX_EVENT_SENSOR_GRAVITY);
	nyx_event_sensor_gravity_t* a = (nyx_event_sensor_gravity_t*)e;
	*event_out_ptr = a->item;
	return NYX_ERROR_NONE;
}
