#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_events_UncaughtErrorEvent
#include <openfl/events/UncaughtErrorEvent.h>
#endif
namespace openfl{
namespace events{

Void UncaughtErrorEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,Dynamic error)
{
HX_STACK_FRAME("openfl.events.UncaughtErrorEvent","new",0x17652810,"openfl.events.UncaughtErrorEvent.new","openfl/events/UncaughtErrorEvent.hx",12,0x0dad2340)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(error,"error")
bool bubbles = __o_bubbles.Default(true);
bool cancelable = __o_cancelable.Default(true);
{
	HX_STACK_LINE(14)
	super::__construct(type,bubbles,cancelable,null(),null());
	HX_STACK_LINE(15)
	this->error = error;
}
;
	return null();
}

//UncaughtErrorEvent_obj::~UncaughtErrorEvent_obj() { }

Dynamic UncaughtErrorEvent_obj::__CreateEmpty() { return  new UncaughtErrorEvent_obj; }
hx::ObjectPtr< UncaughtErrorEvent_obj > UncaughtErrorEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,Dynamic error)
{  hx::ObjectPtr< UncaughtErrorEvent_obj > result = new UncaughtErrorEvent_obj();
	result->__construct(type,__o_bubbles,__o_cancelable,error);
	return result;}

Dynamic UncaughtErrorEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UncaughtErrorEvent_obj > result = new UncaughtErrorEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::openfl::_legacy::events::Event UncaughtErrorEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.UncaughtErrorEvent","clone",0x483db70d,"openfl.events.UncaughtErrorEvent.clone","openfl/events/UncaughtErrorEvent.hx",20,0x0dad2340)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	::String _g = this->get_type();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(22)
	bool _g1 = this->get_bubbles();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(22)
	bool _g2 = this->get_cancelable();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(22)
	return ::openfl::events::UncaughtErrorEvent_obj::__new(_g,_g1,_g2,this->error);
}


::String UncaughtErrorEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.UncaughtErrorEvent","toString",0x4ef19afc,"openfl.events.UncaughtErrorEvent.toString","openfl/events/UncaughtErrorEvent.hx",27,0x0dad2340)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	::String _g = this->get_type();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(29)
	::String _g1 = (HX_CSTRING("[UncaughtErrorEvent type=") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(29)
	::String _g2 = (_g1 + HX_CSTRING(" bubbles="));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(29)
	bool _g3 = this->get_bubbles();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(29)
	::String _g4 = ::Std_obj::string(_g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(29)
	::String _g5 = (_g2 + _g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(29)
	::String _g6 = (_g5 + HX_CSTRING(" cancelable="));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(29)
	bool _g7 = this->get_cancelable();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(29)
	::String _g8 = ::Std_obj::string(_g7);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(29)
	::String _g9 = (_g6 + _g8);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(29)
	return (_g9 + HX_CSTRING("]"));
}


::String UncaughtErrorEvent_obj::UNCAUGHT_ERROR;


UncaughtErrorEvent_obj::UncaughtErrorEvent_obj()
{
}

void UncaughtErrorEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UncaughtErrorEvent);
	HX_MARK_MEMBER_NAME(error,"error");
	::openfl::events::TextEvent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UncaughtErrorEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(error,"error");
	::openfl::events::TextEvent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UncaughtErrorEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return error; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"UNCAUGHT_ERROR") ) { return UNCAUGHT_ERROR; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UncaughtErrorEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { error=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"UNCAUGHT_ERROR") ) { UNCAUGHT_ERROR=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UncaughtErrorEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("error"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("UNCAUGHT_ERROR"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UncaughtErrorEvent_obj,error),HX_CSTRING("error")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("error"),
	HX_CSTRING("clone"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UncaughtErrorEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UncaughtErrorEvent_obj::UNCAUGHT_ERROR,"UNCAUGHT_ERROR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UncaughtErrorEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UncaughtErrorEvent_obj::UNCAUGHT_ERROR,"UNCAUGHT_ERROR");
};

#endif

Class UncaughtErrorEvent_obj::__mClass;

void UncaughtErrorEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.events.UncaughtErrorEvent"), hx::TCanCast< UncaughtErrorEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void UncaughtErrorEvent_obj::__boot()
{
	UNCAUGHT_ERROR= HX_CSTRING("uncaughtError");
}

} // end namespace openfl
} // end namespace events
