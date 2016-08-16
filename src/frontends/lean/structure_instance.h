/*
Copyright (c) 2016 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include "frontends/lean/parse_table.h"
namespace lean {
void init_structure_instance_parsing_rules(parse_table & r);
bool is_structure_instance(expr const & e);
void destruct_structure_instance(expr const & e, expr & t, buffer<name> & field_names,
                                 buffer<expr> & field_values, buffer<expr> & using_exprs);
void initialize_structure_instance();
void finalize_structure_instance();
}
