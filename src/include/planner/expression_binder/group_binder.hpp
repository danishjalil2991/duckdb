//===----------------------------------------------------------------------===//
//                         DuckDB
//
// planner/expression_binder/group_binder.hpp
//
//
//===----------------------------------------------------------------------===//

#pragma once

#include "planner/expression_binder.hpp"

namespace duckdb {

//! The GROUP binder is responsible for binding expressions in the GROUP BY clause
class GroupBinder : public SelectNodeBinder {
public:
	GroupBinder(Binder &binder, ClientContext &context, SelectNode &node);

	BindResult BindExpression(unique_ptr<Expression> expr, uint32_t depth) override;
};

} // namespace duckdb