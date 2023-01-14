﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

Source: Host.sln

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_DEMO_DP1
#define VCZH_WORKFLOW_COMPILER_GENERATED_DEMO_DP1

#include "Demo.h"
#include "DocumentEditorBase.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#endif

namespace demo
{
	class DocumentEditorRibbon : public ::demo::DocumentEditorBase, public ::demo::DocumentEditorRibbonConstructor, public ::vl::reflection::Description<DocumentEditorRibbon>
	{
		friend struct ::vl_workflow_global::__vwsnf194_Demo_demo_DocumentEditorRibbon___vwsn_instance_ctor__;
		friend class ::demo::DocumentEditorRibbonConstructor;
		friend class ::vl_workflow_global::__vwsnc78_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc79_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc80_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc81_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc82_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc83_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc84_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc85_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc86_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize__vl_reflection_description_IValueSubscription;
		friend struct ::vl_workflow_global::__vwsnf179_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf180_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf181_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf182_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf183_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf184_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf185_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf186_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf187_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf188_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf189_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf190_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf191_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf192_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf193_Demo_demo_DocumentEditorRibbonConstructor___vwsn_demo_DocumentEditorRibbon_Initialize_;
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<DocumentEditorRibbon>;
#endif
	private:
		bool __vwsn_prop_AlignLeftSelected;
		bool GetAlignLeftSelected();
		void SetAlignLeftSelected(bool __vwsn_value_);
		::vl::Event<void()> AlignLeftSelectedChanged;
		bool __vwsn_prop_AlignCenterSelected;
		bool GetAlignCenterSelected();
		void SetAlignCenterSelected(bool __vwsn_value_);
		::vl::Event<void()> AlignCenterSelectedChanged;
		bool __vwsn_prop_AlignRightSelected;
		bool GetAlignRightSelected();
		void SetAlignRightSelected(bool __vwsn_value_);
		::vl::Event<void()> AlignRightSelectedChanged;
		::vl::Ptr<::vl::reflection::description::IValueList> __vwsn_prop_StyleGroups;
		::vl::Ptr<::vl::reflection::description::IValueList> GetStyleGroups();
		void SetStyleGroups(::vl::Ptr<::vl::reflection::description::IValueList> __vwsn_value_);
		::vl::Event<void()> StyleGroupsChanged;
		::vl::Ptr<::vl::reflection::description::IValueList> GenerateStyleGroups();
		void SelectStyleName(const ::vl::Nullable<::vl::WString>& styleName);
	public:
		DocumentEditorRibbon();
		void __vwsn_instance_ctor_();
		~DocumentEditorRibbon();
	};

	class DocumentEditorToolstrip : public ::demo::DocumentEditorBase, public ::demo::DocumentEditorToolstripConstructor, public ::vl::reflection::Description<DocumentEditorToolstrip>
	{
		friend class ::demo::DocumentEditorToolstripConstructor;
		friend class ::vl_workflow_global::__vwsnc90_Demo_demo_DocumentEditorToolstripConstructor___vwsn_demo_DocumentEditorToolstrip_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc91_Demo_demo_DocumentEditorToolstripConstructor___vwsn_demo_DocumentEditorToolstrip_Initialize__vl_reflection_description_IValueSubscription;
		friend struct ::vl_workflow_global::__vwsnf198_Demo_demo_DocumentEditorToolstripConstructor___vwsn_demo_DocumentEditorToolstrip_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf199_Demo_demo_DocumentEditorToolstripConstructor___vwsn_demo_DocumentEditorToolstrip_Initialize_;
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<DocumentEditorToolstrip>;
#endif
	public:
		DocumentEditorToolstrip();
		~DocumentEditorToolstrip();
	};

}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

#endif
