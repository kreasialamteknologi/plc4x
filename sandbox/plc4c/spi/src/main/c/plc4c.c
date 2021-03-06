/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#include "plc4c.h"

error_code plc4c_system_create(plc4c_system **system) {
    return OK;
}

void plc4c_system_destroy(plc4c_system *system) {

}

void plc4c_system_set_on_driver_loaded(plc4c_system *system,
        plc4c_system_callback_on_driver_loaded callback) {

}

void plc4c_system_set_on_driver_load_error(plc4c_system *system,
        plc4c_system_callback_driver_load_error callback) {

}

void plc4c_system_set_on_connection(plc4c_system *system,
        plc4c_system_callback_on_connection callback) {

}

void plc4c_system_set_on_connection_error(plc4c_system *system,
        plc4c_system_callback_connection_error callback) {

}

void plc4c_system_set_on_disconnection(plc4c_system *system,
        plc4c_system_callback_on_disconnection callback) {

}

void plc4c_system_set_on_disconnection_error(plc4c_system *system,
        plc4c_system_callback_disconnection_error callback) {

}

void plc4c_system_set_on_loop_error(plc4c_system *system,
        plc4c_system_callback_loop_error callback) {

}

error_code plc4c_init(plc4c_system *system) {
    return OK;
}

void plc4c_system_shutdown(plc4c_system *system) {

}

error_code plc4c_system_connect(plc4c_system *system,
                                const char *connectionString,
                                plc4c_connection **connection) {
    return OK;
}

error_code plc4c_system_connect_callback(plc4c_system *system,
                                         const char *connectionString,
                                         plc4c_connection **connection,
                                         plc4c_system_callback_on_connection success_callback,
                                         plc4c_system_callback_connection_error error_callback) {
    return OK;
}

error_code plc4c_disconnect(plc4c_connection *connection) {
    return OK;
}

error_code plc4c_disconnect_callback(plc4c_connection *connection,
                                     plc4c_system_callback_on_disconnection success_callback,
                                     plc4c_system_callback_disconnection_error error_callback) {
    return OK;
}

error_code plc4c_system_loop() {
    return OK;
}

