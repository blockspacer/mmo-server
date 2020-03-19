#include "AIActor.h"
#include "AIActorManager.h"
#include "AIFuzzyLogic.h"
#include "AIGroup.h"
#include "AIMonster.h"
#include "AIPathFinder.h"
#include "AIPlayer.h"
#include "AIScene.h"
#include "AIService.h"
#include "AISkill.h"
#include "AIType.h"
#include "ActorAI.h"
#include "MonsterGenerator.h"
#include "MonsterType.h"
#include "SkillType.h"
#include "lua_tinker.h"
#include "rule.h"
#include "rule_set.h"
#include "trapezoid.h"
void ai2lua(lua_State* L)
{
    lua_tinker::def(L, "CheckSameDay", &CheckSameDay);
    lua_tinker::def(L, "ConvertEnc", &ConvertEnc);
    lua_tinker::def(L, "DateDiffLocal", &DateDiffLocal);
    lua_tinker::def(L, "FindNameError",
                    lua_tinker::args_type_overload_functor(lua_tinker::make_functor_ptr((bool (*)(const std::string&))(&FindNameError)),
                                                           lua_tinker::make_functor_ptr((bool (*)(const std::wstring&))(&FindNameError))));
    lua_tinker::def(L, "GetBasePath", &GetBasePath);
    lua_tinker::def(L, "GetFileExt", &GetFileExt);
    lua_tinker::def(L, "GetFileNameFromFullPath", &GetFileNameFromFullPath);
    lua_tinker::def(L, "GetFileNameWithoutExt", &GetFileNameWithoutExt);
    lua_tinker::def(L, "GetFullPath", &GetFullPath);
    lua_tinker::def(L, "GetHighFromU64", &GetHighFromU64);
    lua_tinker::def(L, "GetLowFromU64", &GetLowFromU64);
    lua_tinker::def(L, "GetNextDayBeginTime", &GetNextDayBeginTime);
    lua_tinker::def(L, "GetTimeFromString", &GetTimeFromString);
    lua_tinker::def(L, "HasFlag", &HasFlag);
    lua_tinker::def(L, "IsUTF8_NoneControl", &IsUTF8_NoneControl);
    lua_tinker::def(L, "MAKE32", &MAKE32);
    lua_tinker::def(L, "MAKE64", &MAKE64);
    lua_tinker::def(L, "MakeINT64", &MakeINT64);
    lua_tinker::def(L, "MakeUINT64", &MakeUINT64);
    lua_tinker::def(L, "MulDiv", &MulDiv);
    lua_tinker::def(L, "MulDivSign", &MulDivSign);
    lua_tinker::def(L, "RegexStrCheck", &RegexStrCheck);
    lua_tinker::def(L, "RegexStrReload", &RegexStrReload);
    lua_tinker::def(L, "ReplaceIllegaWords",
                    lua_tinker::args_type_overload_functor(lua_tinker::make_functor_ptr((bool (*)(std::string&))(&ReplaceIllegaWords)),
                                                           lua_tinker::make_functor_ptr((bool (*)(std::wstring&))(&ReplaceIllegaWords))));
    lua_tinker::def(L, "ReplaceStr", &ReplaceStr);
    lua_tinker::def(L, "TimeGetMillisecond", &TimeGetMillisecond);
    lua_tinker::def(L, "TimeGetMonotonic", &TimeGetMonotonic);
    lua_tinker::def(L, "TimeGetSecond", &TimeGetSecond);
    lua_tinker::def(L, "TimeGetSecondLocal", &TimeGetSecondLocal);
    lua_tinker::def(L, "TrimPath", &TrimPath);
    lua_tinker::def(L, "URLDecode", &URLDecode);
    lua_tinker::def(L, "URLEncode", &URLEncode);
    lua_tinker::def(L, "_TimeGetMillisecond", &_TimeGetMillisecond);
    lua_tinker::def(L, "_TimeGetMonotonic", &_TimeGetMonotonic);
    lua_tinker::def(L, "_TimeGetSecond", &_TimeGetSecond);
    lua_tinker::def(L, "_TimeGetSecondLocal", &_TimeGetSecondLocal);
    lua_tinker::def(L, "bit_flip", &bit_flip);
    lua_tinker::def(L, "bit_set", &bit_set);
    lua_tinker::def(L, "bit_test", &bit_test);
    lua_tinker::def(L, "gmt2local", &gmt2local);
    lua_tinker::def(L, "hex_get", &hex_get);
    lua_tinker::def(L, "hex_set", &hex_set);
    lua_tinker::def(L, "isleap", &isleap);
    lua_tinker::def(L, "local2gmt", &local2gmt);
    lua_tinker::def(L, "ltrim", &ltrim);
    lua_tinker::def(L, "random_float", &random_float, 0.0f, 1.0f);
    lua_tinker::def(L, "random_hit", &random_hit);
    lua_tinker::def(L, "random_uint32", &random_uint32);
    lua_tinker::def(L, "random_uint32_range", &random_uint32_range);
    lua_tinker::def(L, "rtrim", &rtrim);
    lua_tinker::def(L, "skip_utf8_bom", &skip_utf8_bom);
    lua_tinker::def(L, "split_string", &split_string);
    lua_tinker::def(L, "split_string_view", &split_string_view);
    lua_tinker::def(L, "toHex", &toHex);
    lua_tinker::def(L, "trim", &trim);
    lua_tinker::def(L, "utf8_length", &utf8_length, 0);
    lua_tinker::set(L, "UPDATE_FALSE", UPDATE_FALSE);
    lua_tinker::set(L, "UPDATE_TRUE", UPDATE_TRUE);
    lua_tinker::set(L, "AI_SERVICE", AI_SERVICE);
    lua_tinker::set(L, "GLOBAL_ROUTE_SERVICE", GLOBAL_ROUTE_SERVICE);
    lua_tinker::set(L, "GM_SERVICE", GM_SERVICE);
    lua_tinker::set(L, "GM_SERVICE_ID", GM_SERVICE_ID);
    lua_tinker::set(L, "MARKET_SERVICE", MARKET_SERVICE);
    lua_tinker::set(L, "MARKET_SERVICE_ID", MARKET_SERVICE_ID);
    lua_tinker::set(L, "MAX_AI_SERVICE_ID", MAX_AI_SERVICE_ID);
    lua_tinker::set(L, "MAX_GLOBAL_ROUTE_SERVICE_ID", MAX_GLOBAL_ROUTE_SERVICE_ID);
    lua_tinker::set(L, "MAX_SERVICE_ID", MAX_SERVICE_ID);
    lua_tinker::set(L, "MAX_SHAREZONE_SERVICE_ID", MAX_SHAREZONE_SERVICE_ID);
    lua_tinker::set(L, "MAX_SOCKET_SERVICE_ID", MAX_SOCKET_SERVICE_ID);
    lua_tinker::set(L, "MAX_ZONE_SERVICE_ID", MAX_ZONE_SERVICE_ID);
    lua_tinker::set(L, "MIN_AI_SERVICE_ID", MIN_AI_SERVICE_ID);
    lua_tinker::set(L, "MIN_GLOBAL_ROUTE_SERVICE_ID", MIN_GLOBAL_ROUTE_SERVICE_ID);
    lua_tinker::set(L, "MIN_SHAREZONE_SERVICE_ID", MIN_SHAREZONE_SERVICE_ID);
    lua_tinker::set(L, "MIN_SOCKET_SERVICE_ID", MIN_SOCKET_SERVICE_ID);
    lua_tinker::set(L, "MIN_ZONE_SERVICE_ID", MIN_ZONE_SERVICE_ID);
    lua_tinker::set(L, "SERVICECTRL_SERVICE", SERVICECTRL_SERVICE);
    lua_tinker::set(L, "SERVICECTRL_SERVICE_ID", SERVICECTRL_SERVICE_ID);
    lua_tinker::set(L, "SOCKET_SERVICE", SOCKET_SERVICE);
    lua_tinker::set(L, "SYNC_ALL", SYNC_ALL);
    lua_tinker::set(L, "SYNC_ALL_DELAY", SYNC_ALL_DELAY);
    lua_tinker::set(L, "SYNC_FALSE", SYNC_FALSE);
    lua_tinker::set(L, "SYNC_TRUE", SYNC_TRUE);
    lua_tinker::set(L, "WORLD_SERVICE", WORLD_SERVICE);
    lua_tinker::set(L, "WORLD_SERVICE_ID", WORLD_SERVICE_ID);
    lua_tinker::set(L, "ZONE_SERVICE", ZONE_SERVICE);
    lua_tinker::class_add<FloatRect>(L, "FloatRect", true);
    lua_tinker::class_def<FloatRect>(L, "height", &FloatRect::height);
    lua_tinker::class_def<FloatRect>(L, "isIntersect", &FloatRect::isIntersect);
    lua_tinker::class_def<FloatRect>(L, "width", &FloatRect::width);
    lua_tinker::class_con<FloatRect>(L, lua_tinker::args_type_overload_constructor(new lua_tinker::constructor<FloatRect>(),
                                                                                   new lua_tinker::constructor<FloatRect, const FloatRect&>(),
                                                                                   new lua_tinker::constructor<FloatRect, float, float, float, float>()));
    lua_tinker::class_mem<FloatRect>(L, "bottom", &FloatRect::bottom);
    lua_tinker::class_mem<FloatRect>(L, "left", &FloatRect::left);
    lua_tinker::class_mem<FloatRect>(L, "right", &FloatRect::right);
    lua_tinker::class_mem<FloatRect>(L, "top", &FloatRect::top);
    lua_tinker::class_add<Math>(L, "Math", true);
    lua_tinker::class_def_static<Math>(L, "get2Pow", &Math::get2Pow);
    lua_tinker::class_def_static<Math>(L, "is2Pow", &Math::is2Pow);
    lua_tinker::class_def_static<Math>(L, "isNaN", &Math::isNaN);
    lua_tinker::class_add<Rect>(L, "Rect", true);
    lua_tinker::class_def<Rect>(L, "height", &Rect::height);
    lua_tinker::class_def<Rect>(L, "isIntersect", &Rect::isIntersect);
    lua_tinker::class_def<Rect>(L, "operator=", &Rect::operator=);
    lua_tinker::class_def<Rect>(L, "width", &Rect::width);
    lua_tinker::class_con<Rect>(L, lua_tinker::args_type_overload_constructor(new lua_tinker::constructor<Rect>(), new lua_tinker::constructor<Rect, const Rect&>(),
                                                                              new lua_tinker::constructor<Rect, long, long, long, long>()));
    lua_tinker::class_mem<Rect>(L, "bottom", &Rect::bottom);
    lua_tinker::class_mem<Rect>(L, "left", &Rect::left);
    lua_tinker::class_mem<Rect>(L, "right", &Rect::right);
    lua_tinker::class_mem<Rect>(L, "top", &Rect::top);
    lua_tinker::class_add<ServerPort>(L, "ServerPort", true);
    lua_tinker::class_def<ServerPort>(L, "GetData", &ServerPort::GetData);
    lua_tinker::class_def<ServerPort>(L, "GetServiceID", &ServerPort::GetServiceID);
    lua_tinker::class_def<ServerPort>(L, "GetWorldID", &ServerPort::GetWorldID);
    lua_tinker::class_def<ServerPort>(L, "IsVaild", &ServerPort::IsVaild);
    lua_tinker::class_def<ServerPort>(L, "SetData", &ServerPort::SetData);
    lua_tinker::class_def<ServerPort>(L, "SetServiceID", &ServerPort::SetServiceID);
    lua_tinker::class_def<ServerPort>(L, "SetWorldID", &ServerPort::SetWorldID);
    lua_tinker::class_def<ServerPort>(L, "__lt", &ServerPort::operator<);
    lua_tinker::class_def<ServerPort>(L, "__eq", &ServerPort::operator==);
    lua_tinker::class_con<ServerPort>(L,
                                      lua_tinker::args_type_overload_constructor(
                                          new lua_tinker::constructor<ServerPort, const ServerPort&>(), new lua_tinker::constructor<ServerPort, uint16_t, uint16_t>(),
                                          new lua_tinker::constructor<ServerPort, uint32_t>(1 /*default_args_count*/, 1 /*default_args_start*/)),
                                      0);
    lua_tinker::class_add<Vector2>(L, "Vector2", true);
    lua_tinker::class_def<Vector2>(L, "crossProduct", &Vector2::crossProduct);
    lua_tinker::class_def<Vector2>(L, "distance", &Vector2::distance);
    lua_tinker::class_def<Vector2>(L, "dotProduct", &Vector2::dotProduct);
    lua_tinker::class_def<Vector2>(L, "isNaN", &Vector2::isNaN);
    lua_tinker::class_def<Vector2>(L, "isZeroLength", &Vector2::isZeroLength);
    lua_tinker::class_def<Vector2>(L, "length", &Vector2::length);
    lua_tinker::class_def<Vector2>(L, "makeCeil", &Vector2::makeCeil);
    lua_tinker::class_def<Vector2>(L, "makeFloor", &Vector2::makeFloor);
    lua_tinker::class_def<Vector2>(L, "midPoint", &Vector2::midPoint);
    lua_tinker::class_def<Vector2>(L, "normalise", &Vector2::normalise);
    lua_tinker::class_def<Vector2>(L, "normalisedCopy", &Vector2::normalisedCopy);
    lua_tinker::class_def<Vector2>(L, "operator!=", &Vector2::operator!=);
    lua_tinker::class_def<Vector2>(L, "__lt", &Vector2::operator<);
    lua_tinker::class_def<Vector2>(L, "__eq", &Vector2::operator==);
    lua_tinker::class_def<Vector2>(L, "operator>", &Vector2::operator>);
    lua_tinker::class_def<Vector2>(L, "perpendicular", &Vector2::perpendicular);
    lua_tinker::class_def<Vector2>(L, "randomDeviant", &Vector2::randomDeviant);
    lua_tinker::class_def<Vector2>(L, "reflect", &Vector2::reflect);
    lua_tinker::class_def<Vector2>(L, "squaredDistance", &Vector2::squaredDistance);
    lua_tinker::class_def<Vector2>(L, "squaredLength", &Vector2::squaredLength);
    lua_tinker::class_def<Vector2>(L, "swap", &Vector2::swap);
    lua_tinker::class_con<Vector2>(L,
                                   lua_tinker::args_type_overload_constructor(new lua_tinker::constructor<Vector2>(), new lua_tinker::constructor<Vector2, const float>(),
                                                                              new lua_tinker::constructor<Vector2, const float, const float>()));
    lua_tinker::class_mem_static_readonly<Vector2>(L, "NEGATIVE_UNIT_X", &Vector2::NEGATIVE_UNIT_X);
    lua_tinker::class_mem_static_readonly<Vector2>(L, "NEGATIVE_UNIT_Y", &Vector2::NEGATIVE_UNIT_Y);
    lua_tinker::class_mem_static_readonly<Vector2>(L, "UNIT_SCALE", &Vector2::UNIT_SCALE);
    lua_tinker::class_mem_static_readonly<Vector2>(L, "UNIT_X", &Vector2::UNIT_X);
    lua_tinker::class_mem_static_readonly<Vector2>(L, "UNIT_Y", &Vector2::UNIT_Y);
    lua_tinker::class_mem_static_readonly<Vector2>(L, "ZERO", &Vector2::ZERO);
    lua_tinker::class_mem<Vector2>(L, "x", &Vector2::x);
    lua_tinker::class_mem<Vector2>(L, "y", &Vector2::y);
    lua_tinker::class_add<Vector3>(L, "Vector3", true);
    lua_tinker::class_def<Vector3>(L, "absDotProduct", &Vector3::absDotProduct);
    lua_tinker::class_def<Vector3>(L, "crossProduct", &Vector3::crossProduct);
    lua_tinker::class_def<Vector3>(L, "distance", &Vector3::distance);
    lua_tinker::class_def<Vector3>(L, "dotProduct", &Vector3::dotProduct);
    lua_tinker::class_def<Vector3>(L, "isNaN", &Vector3::isNaN);
    lua_tinker::class_def<Vector3>(L, "isZeroLength", &Vector3::isZeroLength);
    lua_tinker::class_def<Vector3>(L, "length", &Vector3::length);
    lua_tinker::class_def<Vector3>(L, "makeCeil", &Vector3::makeCeil);
    lua_tinker::class_def<Vector3>(L, "makeFloor", &Vector3::makeFloor);
    lua_tinker::class_def<Vector3>(L, "midPoint", &Vector3::midPoint);
    lua_tinker::class_def<Vector3>(L, "normalise", &Vector3::normalise);
    lua_tinker::class_def<Vector3>(L, "normalisedCopy", &Vector3::normalisedCopy);
    lua_tinker::class_def<Vector3>(L, "operator!=", &Vector3::operator!=);
    lua_tinker::class_def<Vector3>(L, "__lt", &Vector3::operator<);
    lua_tinker::class_def<Vector3>(L, "__eq", &Vector3::operator==);
    lua_tinker::class_def<Vector3>(L, "operator>", &Vector3::operator>);
    lua_tinker::class_def<Vector3>(L, "perpendicular", &Vector3::perpendicular);
    lua_tinker::class_def<Vector3>(L, "positionCloses", &Vector3::positionCloses, 1e-03f);
    lua_tinker::class_def<Vector3>(L, "positionEquals", &Vector3::positionEquals, 1e-03);
    lua_tinker::class_def<Vector3>(L, "primaryAxis", &Vector3::primaryAxis);
    lua_tinker::class_def<Vector3>(L, "reflect", &Vector3::reflect);
    lua_tinker::class_def<Vector3>(L, "squaredDistance", &Vector3::squaredDistance);
    lua_tinker::class_def<Vector3>(L, "squaredLength", &Vector3::squaredLength);
    lua_tinker::class_def<Vector3>(L, "swap", &Vector3::swap);
    lua_tinker::class_con<Vector3>(L,
                                   lua_tinker::args_type_overload_constructor(new lua_tinker::constructor<Vector3>(), new lua_tinker::constructor<Vector3, const float>(),
                                                                              new lua_tinker::constructor<Vector3, const float, const float, const float>()));
    lua_tinker::class_mem_static_readonly<Vector3>(L, "NEGATIVE_UNIT_X", &Vector3::NEGATIVE_UNIT_X);
    lua_tinker::class_mem_static_readonly<Vector3>(L, "NEGATIVE_UNIT_Y", &Vector3::NEGATIVE_UNIT_Y);
    lua_tinker::class_mem_static_readonly<Vector3>(L, "NEGATIVE_UNIT_Z", &Vector3::NEGATIVE_UNIT_Z);
    lua_tinker::class_mem_static_readonly<Vector3>(L, "UNIT_SCALE", &Vector3::UNIT_SCALE);
    lua_tinker::class_mem_static_readonly<Vector3>(L, "UNIT_X", &Vector3::UNIT_X);
    lua_tinker::class_mem_static_readonly<Vector3>(L, "UNIT_Y", &Vector3::UNIT_Y);
    lua_tinker::class_mem_static_readonly<Vector3>(L, "UNIT_Z", &Vector3::UNIT_Z);
    lua_tinker::class_mem_static_readonly<Vector3>(L, "ZERO", &Vector3::ZERO);
    lua_tinker::class_mem<Vector3>(L, "x", &Vector3::x);
    lua_tinker::class_mem<Vector3>(L, "y", &Vector3::y);
    lua_tinker::class_mem<Vector3>(L, "z", &Vector3::z);
    lua_tinker::class_add<VirtualSocket>(L, "VirtualSocket", true);
    lua_tinker::class_def_static<VirtualSocket>(L, "CreateVirtualSocket", &VirtualSocket::CreateVirtualSocket);
    lua_tinker::class_def<VirtualSocket>(L, "GetData64", &VirtualSocket::GetData64);
    lua_tinker::class_def<VirtualSocket>(L, "GetServerPort", &VirtualSocket::GetServerPort);
    lua_tinker::class_def<VirtualSocket>(L, "GetSocketIdx", &VirtualSocket::GetSocketIdx);
    lua_tinker::class_def<VirtualSocket>(L, "IsVaild", &VirtualSocket::IsVaild);
    lua_tinker::class_def<VirtualSocket>(L, "SetServerPort", &VirtualSocket::SetServerPort);
    lua_tinker::class_def<VirtualSocket>(L, "SetSocketIdx", &VirtualSocket::SetSocketIdx);
    lua_tinker::class_def<VirtualSocket>(L, "__lt", &VirtualSocket::operator<);
    lua_tinker::class_def<VirtualSocket>(L, "__eq", &VirtualSocket::operator==);
    lua_tinker::class_con<VirtualSocket>(
        L,
        lua_tinker::args_type_overload_constructor(new lua_tinker::constructor<VirtualSocket, const ServerPort&>(),
                                                   new lua_tinker::constructor<VirtualSocket, const ServerPort&, uint16_t>(),
                                                   new lua_tinker::constructor<VirtualSocket, const VirtualSocket&>(),
                                                   new lua_tinker::constructor<VirtualSocket, uint64_t>(1 /*default_args_count*/, 1 /*default_args_start*/)),
        0);
    lua_tinker::namespace_add(L, "GameMath");
    lua_tinker::namespace_def(L, "GameMath", "DDALineEx", &GameMath::DDALineEx);
    lua_tinker::namespace_def(L, "GameMath", "DDALineForeach", &GameMath::DDALineForeach);
    lua_tinker::namespace_def(L, "GameMath", "correctRect", &GameMath::correctRect);
    lua_tinker::namespace_def(L, "GameMath", "distance", &GameMath::distance);
    lua_tinker::namespace_def(L, "GameMath", "distance2D", &GameMath::distance2D);
    lua_tinker::namespace_def(L, "GameMath", "getAngleFrom", &GameMath::getAngleFrom, GameMath::VECTOR2_NORTH);
    lua_tinker::namespace_def(L, "GameMath", "getDirectAngleFrom", &GameMath::getDirectAngleFrom, GameMath::VECTOR2_NORTH, true);
    lua_tinker::namespace_def(L, "GameMath", "getDirectRadianFrom", &GameMath::getDirectRadianFrom, GameMath::VECTOR2_NORTH, true);
    lua_tinker::namespace_def(L, "GameMath", "getRadianFrom", &GameMath::getRadianFrom, GameMath::VECTOR2_NORTH);
    lua_tinker::namespace_def(L, "GameMath", "isIntersect", &GameMath::isIntersect);
    lua_tinker::namespace_def(L, "GameMath", "manhattanDistance", &GameMath::manhattanDistance);
    lua_tinker::namespace_def(L, "GameMath", "random_vector2", &GameMath::random_vector2);
    lua_tinker::namespace_def(L, "GameMath", "rotate", &GameMath::rotate);
    lua_tinker::namespace_def(L, "GameMath", "rotateByRadian", &GameMath::rotateByRadian);
    lua_tinker::namespace_def(L, "GameMath", "simpleDistance", &GameMath::simpleDistance);
    lua_tinker::namespace_set(L, "GameMath", "VECTOR2_EAST", GameMath::VECTOR2_EAST);
    lua_tinker::namespace_set(L, "GameMath", "VECTOR2_NORTH", GameMath::VECTOR2_NORTH);
    lua_tinker::namespace_set(L, "GameMath", "VECTOR2_SOUTH", GameMath::VECTOR2_SOUTH);
    lua_tinker::namespace_set(L, "GameMath", "VECTOR2_WEST", GameMath::VECTOR2_WEST);
    lua_tinker::namespace_add(L, "GameMath::Intersection");
    lua_tinker::namespace_def(L, "GameMath::Intersection", "LineIntersection2D", &GameMath::Intersection::LineIntersection2D);
    lua_tinker::namespace_def(L, "GameMath::Intersection", "getNearestPoint", &GameMath::Intersection::getNearestPoint);
    lua_tinker::namespace_def(L, "GameMath::Intersection", "isInABBox", &GameMath::Intersection::isInABBox);
    lua_tinker::namespace_def(L, "GameMath::Intersection", "isInFOV", &GameMath::Intersection::isInFOV);
    lua_tinker::namespace_def(L, "GameMath::Intersection", "lineIntersection2D", &GameMath::Intersection::lineIntersection2D);
    lua_tinker::scope_inner(L, "GameMath", "Intersection", "GameMath::Intersection");
}