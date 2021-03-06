/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mobileanalytics/model/Session.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MobileAnalytics
{
namespace Model
{

Session::Session() : 
    m_idHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_stopTimestampHasBeenSet(false)
{
}

Session::Session(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_stopTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

Session& Session::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("duration"))
  {
    m_duration = jsonValue.GetInt64("duration");

    m_durationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTimestamp"))
  {
    m_startTimestamp = jsonValue.GetString("startTimestamp");

    m_startTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stopTimestamp"))
  {
    m_stopTimestamp = jsonValue.GetString("stopTimestamp");

    m_stopTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue Session::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_durationHasBeenSet)
  {
   payload.WithInt64("duration", m_duration);

  }

  if(m_startTimestampHasBeenSet)
  {
   payload.WithString("startTimestamp", m_startTimestamp);

  }

  if(m_stopTimestampHasBeenSet)
  {
   payload.WithString("stopTimestamp", m_stopTimestamp);

  }

  return payload;
}

} // namespace Model
} // namespace MobileAnalytics
} // namespace Aws
