#ifndef INCLUDED_openfl__legacy_Assets
#define INCLUDED_openfl__legacy_Assets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,_legacy,AssetLibrary)
HX_DECLARE_CLASS2(openfl,_legacy,AssetType)
HX_DECLARE_CLASS2(openfl,_legacy,Assets)
HX_DECLARE_CLASS2(openfl,_legacy,IAssetCache)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,MovieClip)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,media,Sound)
HX_DECLARE_CLASS3(openfl,_legacy,text,Font)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)
namespace openfl{
namespace _legacy{


class HXCPP_CLASS_ATTRIBUTES  Assets_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Assets_obj OBJ_;
		Assets_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Assets_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Assets_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Assets"); }

		static ::openfl::_legacy::IAssetCache cache;
		static ::haxe::ds::StringMap libraries;
		static ::openfl::_legacy::events::EventDispatcher dispatcher;
		static bool initialized;
		static Void addEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture,hx::Null< int >  priority,hx::Null< bool >  useWeakReference);
		static Dynamic addEventListener_dyn();

		static bool dispatchEvent( ::openfl::_legacy::events::Event event);
		static Dynamic dispatchEvent_dyn();

		static bool exists( ::String id,::openfl::_legacy::AssetType type);
		static Dynamic exists_dyn();

		static ::openfl::_legacy::display::BitmapData getBitmapData( ::String id,hx::Null< bool >  useCache);
		static Dynamic getBitmapData_dyn();

		static ::openfl::_legacy::utils::ByteArray getBytes( ::String id);
		static Dynamic getBytes_dyn();

		static ::openfl::_legacy::text::Font getFont( ::String id,hx::Null< bool >  useCache);
		static Dynamic getFont_dyn();

		static ::openfl::_legacy::AssetLibrary getLibrary( ::String name);
		static Dynamic getLibrary_dyn();

		static ::openfl::_legacy::display::MovieClip getMovieClip( ::String id);
		static Dynamic getMovieClip_dyn();

		static ::openfl::_legacy::media::Sound getMusic( ::String id,hx::Null< bool >  useCache);
		static Dynamic getMusic_dyn();

		static ::String getPath( ::String id);
		static Dynamic getPath_dyn();

		static ::openfl::_legacy::media::Sound getSound( ::String id,hx::Null< bool >  useCache);
		static Dynamic getSound_dyn();

		static ::String getText( ::String id);
		static Dynamic getText_dyn();

		static bool hasEventListener( ::String type);
		static Dynamic hasEventListener_dyn();

		static Void initialize( );
		static Dynamic initialize_dyn();

		static bool isLocal( ::String id,::openfl::_legacy::AssetType type,hx::Null< bool >  useCache);
		static Dynamic isLocal_dyn();

		static bool isValidBitmapData( ::openfl::_legacy::display::BitmapData bitmapData);
		static Dynamic isValidBitmapData_dyn();

		static bool isValidSound( ::openfl::_legacy::media::Sound sound);
		static Dynamic isValidSound_dyn();

		static Array< ::String > list( ::openfl::_legacy::AssetType type);
		static Dynamic list_dyn();

		static Void loadBitmapData( ::String id,Dynamic handler,hx::Null< bool >  useCache);
		static Dynamic loadBitmapData_dyn();

		static Void loadBytes( ::String id,Dynamic handler);
		static Dynamic loadBytes_dyn();

		static Void loadFont( ::String id,Dynamic handler,hx::Null< bool >  useCache);
		static Dynamic loadFont_dyn();

		static Void loadLibrary( ::String name,Dynamic handler);
		static Dynamic loadLibrary_dyn();

		static Void loadMusic( ::String id,Dynamic handler,hx::Null< bool >  useCache);
		static Dynamic loadMusic_dyn();

		static Void loadMovieClip( ::String id,Dynamic handler);
		static Dynamic loadMovieClip_dyn();

		static Void loadSound( ::String id,Dynamic handler,hx::Null< bool >  useCache);
		static Dynamic loadSound_dyn();

		static Void loadText( ::String id,Dynamic handler);
		static Dynamic loadText_dyn();

		static Void registerLibrary( ::String name,::openfl::_legacy::AssetLibrary library);
		static Dynamic registerLibrary_dyn();

		static Void removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  capture);
		static Dynamic removeEventListener_dyn();

		static ::Class resolveClass( ::String name);
		static Dynamic resolveClass_dyn();

		static ::Enum resolveEnum( ::String name);
		static Dynamic resolveEnum_dyn();

		static Void unloadLibrary( ::String name);
		static Dynamic unloadLibrary_dyn();

		static Void library_onEvent( ::openfl::_legacy::AssetLibrary library,::String type);
		static Dynamic library_onEvent_dyn();

};

} // end namespace openfl
} // end namespace _legacy

#endif /* INCLUDED_openfl__legacy_Assets */ 
