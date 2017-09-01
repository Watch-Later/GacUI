/***********************************************************************
Vczh Library++ 3.0
Developer: Zihan Chen(vczh)
GacUI Reflection: Basic

Interfaces:
***********************************************************************/

#ifdef VCZH_DEBUG_NO_REFLECTION
static_assert(false, "Don't use GacUIReflection.(h|cpp) if VCZH_DEBUG_NO_REFLECTION is defined.");
#endif

#ifndef VCZH_PRESENTATION_REFLECTION_GUIREFLECTIONPLUGIN
#define VCZH_PRESENTATION_REFLECTION_GUIREFLECTIONPLUGIN

#include "../../GacUIReflectionHelper.h"

namespace vl
{
	namespace reflection
	{
		namespace description
		{

#ifndef VCZH_DEBUG_NO_REFLECTION

/***********************************************************************
Type List (Basic)
***********************************************************************/

#define GUIREFLECTIONBASIC_TYPELIST(F)\
			F(presentation::Color)\
			F(presentation::Alignment)\
			F(presentation::AxisDirection)\
			F(presentation::TextPos)\
			F(presentation::GridPos)\
			F(presentation::Point)\
			F(presentation::Size)\
			F(presentation::Rect)\
			F(presentation::Margin)\
			F(presentation::FontProperties)\
			F(presentation::GlobalStringKey)\
			F(presentation::INativeImageFrame)\
			F(presentation::INativeImage)\
			F(presentation::INativeImage::FormatType)\
			F(presentation::INativeCursor)\
			F(presentation::INativeCursor::SystemCursorType)\
			F(presentation::INativeWindow)\
			F(presentation::INativeWindow::WindowSizeState)\
			F(presentation::INativeDelay)\
			F(presentation::INativeDelay::ExecuteStatus)\
			F(presentation::INativeScreen)\
			F(presentation::INativeImageService)\
			F(presentation::INativeResourceService)\
			F(presentation::INativeAsyncService)\
			F(presentation::INativeClipboardService)\
			F(presentation::INativeScreenService)\
			F(presentation::INativeInputService)\
			F(presentation::INativeDialogService::MessageBoxButtonsInput)\
			F(presentation::INativeDialogService::MessageBoxButtonsOutput)\
			F(presentation::INativeDialogService::MessageBoxDefaultButton)\
			F(presentation::INativeDialogService::MessageBoxIcons)\
			F(presentation::INativeDialogService::MessageBoxModalOptions)\
			F(presentation::INativeDialogService::ColorDialogCustomColorOptions)\
			F(presentation::INativeDialogService::FileDialogTypes)\
			F(presentation::INativeDialogService::FileDialogOptions)\
			F(presentation::INativeController)\
			F(presentation::GuiImageData)\
			F(presentation::GuiTextData)\
			F(presentation::DocumentFontSize)\
			F(presentation::DocumentStyleProperties)\
			F(presentation::DocumentRun)\
			F(presentation::DocumentContainerRun)\
			F(presentation::DocumentContentRun)\
			F(presentation::DocumentTextRun)\
			F(presentation::DocumentInlineObjectRun)\
			F(presentation::DocumentImageRun)\
			F(presentation::DocumentEmbeddedObjectRun)\
			F(presentation::DocumentStylePropertiesRun)\
			F(presentation::DocumentStyleApplicationRun)\
			F(presentation::DocumentHyperlinkRun::Package)\
			F(presentation::DocumentHyperlinkRun)\
			F(presentation::DocumentParagraphRun)\
			F(presentation::DocumentStyle)\
			F(presentation::DocumentModel)\
			F(presentation::GuiResourceNodeBase)\
			F(presentation::GuiResourceLocation)\
			F(presentation::GuiResourceTextPos)\
			F(presentation::GuiResourceError)\
			F(presentation::GuiResourceItem)\
			F(presentation::GuiResourceFolder)\
			F(presentation::GuiResource)\
			F(presentation::GuiResourcePathResolver)\
			F(presentation::GuiResourceUsage)\
			F(presentation::IGuiResourceManager)\
			F(presentation::INativeWindowListener::HitTestResult)\

/***********************************************************************
Type List (Elements)
***********************************************************************/

#define GUIREFLECTIONELEMENT_TYPELIST(F)\
			F(presentation::elements::IGuiGraphicsElement)\
			F(presentation::elements::IGuiGraphicsParagraph)\
			F(presentation::elements::IGuiGraphicsParagraph::CaretRelativePosition)\
			F(presentation::elements::ElementShape)\
			F(presentation::elements::GuiSolidBorderElement)\
			F(presentation::elements::GuiRoundBorderElement)\
			F(presentation::elements::Gui3DBorderElement)\
			F(presentation::elements::Gui3DSplitterElement)\
			F(presentation::elements::Gui3DSplitterElement::Direction)\
			F(presentation::elements::GuiSolidBackgroundElement)\
			F(presentation::elements::GuiGradientBackgroundElement)\
			F(presentation::elements::GuiGradientBackgroundElement::Direction)\
			F(presentation::elements::GuiSolidLabelElement)\
			F(presentation::elements::GuiImageFrameElement)\
			F(presentation::elements::GuiPolygonElement)\
			F(presentation::elements::text::TextLines)\
			F(presentation::elements::text::ColorItem)\
			F(presentation::elements::text::ColorEntry)\
			F(presentation::elements::GuiColorizedTextElement)\
			F(presentation::elements::GuiDocumentElement)\

/***********************************************************************
Type List (Compositions)
***********************************************************************/

#define GUIREFLECTIONCOMPOSITION_TYPELIST(F)\
			F(presentation::compositions::KeyDirection)\
			F(presentation::compositions::IGuiAxis)\
			F(presentation::compositions::GuiDefaultAxis)\
			F(presentation::compositions::GuiAxis)\
			F(presentation::compositions::GuiGraphicsComposition)\
			F(presentation::compositions::GuiGraphicsComposition::MinSizeLimitation)\
			F(presentation::compositions::GuiGraphicsSite)\
			F(presentation::compositions::GuiWindowComposition)\
			F(presentation::compositions::GuiBoundsComposition)\
			F(presentation::compositions::GuiStackComposition)\
			F(presentation::compositions::GuiStackComposition::Direction)\
			F(presentation::compositions::GuiStackItemComposition)\
			F(presentation::compositions::GuiCellOption)\
			F(presentation::compositions::GuiCellOption::ComposeType)\
			F(presentation::compositions::GuiTableComposition)\
			F(presentation::compositions::GuiCellComposition)\
			F(presentation::compositions::GuiTableSplitterCompositionBase)\
			F(presentation::compositions::GuiRowSplitterComposition)\
			F(presentation::compositions::GuiColumnSplitterComposition)\
			F(presentation::compositions::FlowAlignment)\
			F(presentation::compositions::GuiFlowComposition)\
			F(presentation::compositions::GuiFlowOption)\
			F(presentation::compositions::GuiFlowOption::BaselineType)\
			F(presentation::compositions::GuiFlowItemComposition)\
			F(presentation::compositions::GuiSideAlignedComposition)\
			F(presentation::compositions::GuiSideAlignedComposition::Direction)\
			F(presentation::compositions::GuiPartialViewComposition)\
			F(presentation::compositions::GuiSharedSizeItemComposition)\
			F(presentation::compositions::GuiSharedSizeRootComposition)\
			F(presentation::compositions::GuiRepeatCompositionBase)\
			F(presentation::compositions::GuiRepeatStackComposition)\
			F(presentation::compositions::GuiRepeatFlowComposition)\
			F(presentation::compositions::IGuiGraphicsAnimation)\
			F(presentation::compositions::GuiGraphicsAnimationManager)\
			F(presentation::compositions::IGuiShortcutKeyItem)\
			F(presentation::compositions::IGuiShortcutKeyManager)\
			F(presentation::compositions::GuiShortcutKeyManager)\
			F(presentation::compositions::IGuiAltAction)\
			F(presentation::compositions::IGuiAltActionContainer)\
			F(presentation::compositions::IGuiAltActionHost)\

/***********************************************************************
Type List (Events)
***********************************************************************/

#define GUIREFLECTIONEVENT_TYPELIST(F)\
			F(presentation::compositions::GuiEventArgs)\
			F(presentation::compositions::GuiRequestEventArgs)\
			F(presentation::compositions::GuiKeyEventArgs)\
			F(presentation::compositions::GuiCharEventArgs)\
			F(presentation::compositions::GuiMouseEventArgs)\
			F(presentation::compositions::GuiItemEventArgs)\
			F(presentation::compositions::GuiItemMouseEventArgs)\
			F(presentation::compositions::GuiNodeEventArgs)\
			F(presentation::compositions::GuiNodeMouseEventArgs)\

/***********************************************************************
Type List (Templates)
***********************************************************************/

#define GUIREFLECTIONTEMPLATES_TYPELIST(F)\
			F(presentation::controls::ButtonState)\
			F(presentation::controls::ColumnSortingState)\
			F(presentation::templates::BoolOption)\
			F(presentation::controls::IComboBoxCommandExecutor)\
			F(presentation::controls::IScrollCommandExecutor)\
			F(presentation::controls::ITabCommandExecutor)\
			F(presentation::controls::GuiComponent)\
			F(presentation::controls::GuiInstanceRootObject)\
			F(presentation::templates::GuiTemplate)\
			F(presentation::templates::GuiControlTemplate)\
			F(presentation::templates::GuiLabelTemplate)\
			F(presentation::templates::GuiSinglelineTextBoxTemplate)\
			F(presentation::templates::GuiDocumentLabelTemplate)\
			F(presentation::templates::GuiMultilineTextBoxTemplate)\
			F(presentation::templates::GuiDocumentViewerTemplate)\
			F(presentation::templates::GuiMenuTemplate)\
			F(presentation::templates::GuiWindowTemplate)\
			F(presentation::templates::GuiButtonTemplate)\
			F(presentation::templates::GuiSelectableButtonTemplate)\
			F(presentation::templates::GuiToolstripButtonTemplate)\
			F(presentation::templates::GuiListViewColumnHeaderTemplate)\
			F(presentation::templates::GuiComboBoxTemplate)\
			F(presentation::templates::GuiScrollTemplate)\
			F(presentation::templates::GuiScrollViewTemplate)\
			F(presentation::templates::GuiTextListTemplate)\
			F(presentation::templates::GuiListViewTemplate)\
			F(presentation::templates::GuiTreeViewTemplate)\
			F(presentation::templates::GuiTabTemplate)\
			F(presentation::templates::GuiDatePickerTemplate)\
			F(presentation::templates::GuiDateComboBoxTemplate)\
			F(presentation::templates::GuiListItemTemplate)\
			F(presentation::templates::GuiTextListItemTemplate)\
			F(presentation::templates::GuiTreeItemTemplate)\
			F(presentation::templates::GuiGridCellTemplate)\
			F(presentation::templates::GuiGridVisualizerTemplate)\
			F(presentation::templates::GuiGridEditorTemplate)\
			F(presentation::templates::GuiControlTemplate_StyleProvider)\
			F(presentation::templates::GuiLabelTemplate_StyleProvider)\
			F(presentation::templates::GuiSinglelineTextBoxTemplate_StyleProvider)\
			F(presentation::templates::GuiDocumentLabelTemplate_StyleProvider)\
			F(presentation::templates::GuiMultilineTextBoxTemplate_StyleProvider)\
			F(presentation::templates::GuiDocumentViewerTemplate_StyleProvider)\
			F(presentation::templates::GuiMenuTemplate_StyleProvider)\
			F(presentation::templates::GuiWindowTemplate_StyleProvider)\
			F(presentation::templates::GuiButtonTemplate_StyleProvider)\
			F(presentation::templates::GuiSelectableButtonTemplate_StyleProvider)\
			F(presentation::templates::GuiToolstripButtonTemplate_StyleProvider)\
			F(presentation::templates::GuiListViewColumnHeaderTemplate_StyleProvider)\
			F(presentation::templates::GuiComboBoxTemplate_StyleProvider)\
			F(presentation::templates::GuiDatePickerTemplate_StyleProvider)\
			F(presentation::templates::GuiDateComboBoxTemplate_StyleProvider)\
			F(presentation::templates::GuiScrollTemplate_StyleProvider)\
			F(presentation::templates::GuiScrollViewTemplate_StyleProvider)\
			F(presentation::templates::GuiTextListTemplate_StyleProvider)\
			F(presentation::templates::GuiListViewTemplate_StyleProvider)\
			F(presentation::templates::GuiTreeViewTemplate_StyleProvider)\
			F(presentation::templates::GuiTabTemplate_StyleProvider)\

/***********************************************************************
Type List (Controls)
***********************************************************************/

#define GUIREFLECTIONCONTROLS_TYPELIST(F)\
			F(presentation::controls::GuiApplication)\
			F(presentation::theme::ITheme)\
			F(presentation::theme::ThemeTemplates)\
			F(presentation::controls::GuiDialogBase)\
			F(presentation::controls::GuiMessageDialog)\
			F(presentation::controls::GuiColorDialog)\
			F(presentation::controls::GuiFontDialog)\
			F(presentation::controls::GuiFileDialogBase)\
			F(presentation::controls::GuiOpenFileDialog)\
			F(presentation::controls::GuiSaveFileDialog)\
			F(presentation::controls::GuiControl)\
			F(presentation::controls::GuiControl::IStyleController)\
			F(presentation::controls::GuiControl::IStyleProvider)\
			F(presentation::controls::GuiCustomControl)\
			F(presentation::controls::GuiLabel)\
			F(presentation::controls::GuiLabel::IStyleController)\
			F(presentation::controls::GuiButton)\
			F(presentation::controls::GuiButton::IStyleController)\
			F(presentation::controls::GuiSelectableButton)\
			F(presentation::controls::GuiSelectableButton::IStyleController)\
			F(presentation::controls::GuiSelectableButton::GroupController)\
			F(presentation::controls::GuiSelectableButton::MutexGroupController)\
			F(presentation::controls::GuiScroll)\
			F(presentation::controls::GuiScroll::IStyleController)\
			F(presentation::controls::GuiTabPage)\
			F(presentation::controls::GuiTab)\
			F(presentation::controls::GuiTab::IStyleController)\
			F(presentation::controls::GuiScrollView)\
			F(presentation::controls::GuiScrollView::IStyleProvider)\
			F(presentation::controls::GuiScrollContainer)\
			F(presentation::controls::GuiControlHost)\
			F(presentation::controls::GuiWindow)\
			F(presentation::controls::GuiWindow::IStyleController)\
			F(presentation::controls::GuiPopup)\
			F(presentation::controls::GuiTooltip)\
			F(presentation::controls::GuiListControl)\
			F(presentation::controls::GuiListControl::IStyleProvider)\
			F(presentation::controls::GuiListControl::IItemProviderCallback)\
			F(presentation::controls::GuiListControl::IItemArrangerCallback)\
			F(presentation::controls::GuiListControl::IItemProvider)\
			F(presentation::controls::GuiListControl::IItemArranger)\
			F(presentation::controls::GuiSelectableListControl)\
			F(presentation::controls::list::ItemProviderBase)\
			F(presentation::controls::list::RangedItemArrangerBase)\
			F(presentation::controls::list::FixedHeightItemArranger)\
			F(presentation::controls::list::FixedSizeMultiColumnItemArranger)\
			F(presentation::controls::list::FixedHeightMultiColumnItemArranger)\
			F(presentation::controls::list::ITextItemView)\
			F(presentation::controls::list::TextItem)\
			F(presentation::controls::TextListView)\
			F(presentation::controls::GuiVirtualTextList)\
			F(presentation::controls::GuiVirtualTextList::IStyleProvider)\
			F(presentation::controls::GuiTextList)\
			F(presentation::controls::GuiListViewColumnHeader)\
			F(presentation::controls::GuiListViewColumnHeader::IStyleController)\
			F(presentation::controls::GuiListViewBase)\
			F(presentation::controls::GuiListViewBase::IStyleProvider)\
			F(presentation::controls::list::IListViewItemView)\
			F(presentation::controls::list::ListViewColumnItemArranger)\
			F(presentation::controls::list::ListViewColumnItemArranger::IColumnItemViewCallback)\
			F(presentation::controls::list::ListViewColumnItemArranger::IColumnItemView)\
			F(presentation::controls::list::ListViewItem)\
			F(presentation::controls::list::ListViewColumn)\
			F(presentation::controls::ListViewView)\
			F(presentation::controls::GuiVirtualListView)\
			F(presentation::controls::GuiListView)\
			F(presentation::controls::IGuiMenuService)\
			F(presentation::controls::IGuiMenuService::Direction)\
			F(presentation::controls::GuiMenu)\
			F(presentation::controls::GuiMenuBar)\
			F(presentation::controls::GuiMenuButton)\
			F(presentation::controls::GuiMenuButton::IStyleController)\
			F(presentation::controls::tree::INodeProviderCallback)\
			F(presentation::controls::tree::INodeProvider)\
			F(presentation::controls::tree::INodeRootProvider)\
			F(presentation::controls::tree::INodeItemView)\
			F(presentation::controls::tree::MemoryNodeProvider)\
			F(presentation::controls::tree::NodeRootProviderBase)\
			F(presentation::controls::tree::MemoryNodeRootProvider)\
			F(presentation::controls::GuiVirtualTreeListControl)\
			F(presentation::controls::tree::ITreeViewItemView)\
			F(presentation::controls::tree::TreeViewItem)\
			F(presentation::controls::tree::TreeViewItemRootProvider)\
			F(presentation::controls::GuiVirtualTreeView)\
			F(presentation::controls::GuiVirtualTreeView::IStyleProvider)\
			F(presentation::controls::GuiTreeView)\
			F(presentation::controls::GuiComboBoxBase)\
			F(presentation::controls::GuiComboBoxBase::IStyleController)\
			F(presentation::controls::GuiComboBoxListControl)\
			F(presentation::controls::GuiComboBoxListControl::IStyleController)\
			F(presentation::controls::GuiToolstripCommand)\
			F(presentation::controls::GuiToolstripMenu)\
			F(presentation::controls::GuiToolstripMenuBar)\
			F(presentation::controls::GuiToolstripToolBar)\
			F(presentation::controls::GuiToolstripButton)\
			F(presentation::controls::GuiDocumentItem)\
			F(presentation::controls::GuiDocumentCommonInterface)\
			F(presentation::controls::GuiDocumentCommonInterface::EditMode)\
			F(presentation::controls::GuiDocumentViewer)\
			F(presentation::controls::GuiDocumentViewer::IStyleProvider)\
			F(presentation::controls::GuiDocumentLabel)\
			F(presentation::controls::GuiDocumentLabel::IStyleController)\
			F(presentation::controls::GuiTextBoxCommonInterface)\
			F(presentation::controls::GuiMultilineTextBox)\
			F(presentation::controls::GuiSinglelineTextBox)\
			F(presentation::controls::GuiSinglelineTextBox::IStyleProvider)\
			F(presentation::controls::list::IDataGridContext)\
			F(presentation::controls::list::IDataVisualizerFactory)\
			F(presentation::controls::list::IDataVisualizer)\
			F(presentation::controls::list::IDataEditorFactory)\
			F(presentation::controls::list::IDataEditor)\
			F(presentation::controls::list::IDataGridView)\
			F(presentation::controls::GuiVirtualDataGrid)\
			F(presentation::controls::list::DataVisualizerBase)\
			F(presentation::controls::list::DataVisualizerFactory)\
			F(presentation::controls::list::DataEditorBase)\
			F(presentation::controls::list::DataEditorFactory)\
			F(presentation::controls::list::MainColumnVisualizerTemplate)\
			F(presentation::controls::list::SubColumnVisualizerTemplate)\
			F(presentation::controls::list::HyperlinkVisualizerTemplate)\
			F(presentation::controls::list::CellBorderVisualizerTemplate)\
			F(presentation::controls::GuiDatePicker)\
			F(presentation::controls::GuiDatePicker::IStyleProvider)\
			F(presentation::controls::GuiDateComboBox)\
			F(presentation::controls::GuiBindableTextList)\
			F(presentation::controls::GuiBindableListView)\
			F(presentation::controls::GuiBindableTreeView)\
			F(presentation::controls::list::IDataProcessorCallback)\
			F(presentation::controls::list::IDataFilter)\
			F(presentation::controls::list::IDataSorter)\
			F(presentation::controls::list::DataFilterBase)\
			F(presentation::controls::list::DataMultipleFilter)\
			F(presentation::controls::list::DataAndFilter)\
			F(presentation::controls::list::DataOrFilter)\
			F(presentation::controls::list::DataNotFilter)\
			F(presentation::controls::list::DataSorterBase)\
			F(presentation::controls::list::DataMultipleSorter)\
			F(presentation::controls::list::DataReverseSorter)\
			F(presentation::controls::list::DataColumn)\
			F(presentation::controls::list::DataProvider)\
			F(presentation::controls::GuiBindableDataGrid)\

/***********************************************************************
Type List
***********************************************************************/

			GUIREFLECTIONBASIC_TYPELIST(DECL_TYPE_INFO)
			GUIREFLECTIONELEMENT_TYPELIST(DECL_TYPE_INFO)
			GUIREFLECTIONCOMPOSITION_TYPELIST(DECL_TYPE_INFO)
			GUIREFLECTIONEVENT_TYPELIST(DECL_TYPE_INFO)
			GUIREFLECTIONTEMPLATES_TYPELIST(DECL_TYPE_INFO)
			GUIREFLECTIONCONTROLS_TYPELIST(DECL_TYPE_INFO)

#pragma warning(push)
#pragma warning(disable:4250)

/***********************************************************************
GuiEventInfoImpl
***********************************************************************/

			template<typename T>
			class GuiEventInfoImpl : public EventInfoImpl, private IEventInfo::ICpp
			{
				using GuiGraphicsComposition = presentation::compositions::GuiGraphicsComposition;

				template<typename U>
				using GuiGraphicsEvent = presentation::compositions::GuiGraphicsEvent<U>;
			protected:
				typedef Func<GuiGraphicsEvent<T>*(DescriptableObject*, bool)>		EventRetriverFunction;

				EventRetriverFunction				eventRetriver;

				Ptr<IEventHandler> AttachInternal(DescriptableObject* thisObject, Ptr<IValueFunctionProxy> handler)override
				{
					GuiGraphicsEvent<T>* eventObject=eventRetriver(thisObject, true);
					auto func = [=](GuiGraphicsComposition* sender, T* arguments)
						{
							Value senderObject = BoxValue<GuiGraphicsComposition*>(sender, Description<GuiGraphicsComposition>::GetAssociatedTypeDescriptor());
							Value argumentsObject = BoxValue<T*>(arguments, Description<T>::GetAssociatedTypeDescriptor());

							auto eventArgs = IValueList::Create();
							eventArgs->Add(senderObject);
							eventArgs->Add(argumentsObject);
							handler->Invoke(eventArgs);
						};
					return __vwsn::EventAttach(*eventObject, func);
				}

				bool DetachInternal(DescriptableObject* thisObject, Ptr<IEventHandler> handler)override
				{
					GuiGraphicsEvent<T>* eventObject = eventRetriver(thisObject, false);
					if(eventObject)
					{
						return __vwsn::EventDetach(*eventObject, handler);
					}
					return false;
				}

				void InvokeInternal(DescriptableObject* thisObject, Ptr<IValueList> arguments)override
				{
					GuiGraphicsEvent<T>* eventObject=eventRetriver(thisObject, false);
					if(eventObject)
					{
						auto sender = UnboxValue<GuiGraphicsComposition*>(arguments->Get(0), Description<GuiGraphicsComposition>::GetAssociatedTypeDescriptor());
						auto value=UnboxValue<T*>(arguments->Get(1), Description<T>::GetAssociatedTypeDescriptor());
						eventObject->ExecuteWithNewSender(*value, sender);
					}
				}

				Ptr<ITypeInfo> GetHandlerTypeInternal()override
				{
					return TypeInfoRetriver<Func<void(GuiGraphicsComposition*, T*)>>::CreateTypeInfo();
				}

			protected:
				bool								isCompositionEvent;
				
				static WString						attachTemplate;
				static WString						detachTemplate;
				static WString						invokeTemplate;

			public:
				GuiEventInfoImpl(ITypeDescriptor* _ownerTypeDescriptor, const WString& _name, const EventRetriverFunction& _eventRetriver, bool _isCompositionEvent)
					:EventInfoImpl(_ownerTypeDescriptor, _name)
					, eventRetriver(_eventRetriver)
					, isCompositionEvent(_isCompositionEvent)
				{
				}

				~GuiEventInfoImpl()
				{
				}

				IEventInfo::ICpp* GetCpp()override
				{
					return isCompositionEvent ? this : nullptr;
				}

				const WString& GetAttachTemplate()override
				{
					return attachTemplate;
				}

				const WString& GetDetachTemplate()override
				{
					return detachTemplate;
				}

				const WString& GetInvokeTemplate()override
				{
					return invokeTemplate;
				}
			};

			template<typename T>
			WString GuiEventInfoImpl<T>::attachTemplate(L"::vl::__vwsn::EventAttach($This->GetEventReceiver()->$Name, $Handler)", false);
			template<typename T>
			WString GuiEventInfoImpl<T>::detachTemplate(L"::vl::__vwsn::EventDetach($This->GetEventReceiver()->$Name, $Handler)", false);
			template<typename T>
			WString GuiEventInfoImpl<T>::invokeTemplate(L"::vl::__vwsn::EventInvoke($This->GetEventReceiver()->$Name, $Handler)", false);

			template<typename T>
			struct GuiEventArgumentTypeRetriver
			{
				typedef vint								Type;
			};

			template<typename TClass, typename TEvent>
			struct GuiEventArgumentTypeRetriver<TEvent TClass::*>
			{
				typedef typename TEvent::ArgumentType		Type;
			};

/***********************************************************************
Macros
***********************************************************************/

#define CLASS_MEMBER_GUIEVENT(EVENTNAME)\
			AddEvent(\
				new GuiEventInfoImpl<GuiEventArgumentTypeRetriver<decltype(&ClassType::EVENTNAME)>::Type>(\
					this,\
					L ## #EVENTNAME,\
					[](DescriptableObject* thisObject, bool addEventHandler){\
						return &thisObject->SafeAggregationCast<ClassType>()->EVENTNAME;\
					},\
					false\
				)\
			);\

#define CLASS_MEMBER_GUIEVENT_COMPOSITION(EVENTNAME)\
			AddEvent(\
				new GuiEventInfoImpl<GuiEventArgumentTypeRetriver<decltype(&GuiGraphicsEventReceiver::EVENTNAME)>::Type>(\
					this,\
					L ## #EVENTNAME,\
					[](DescriptableObject* thisObject, bool addEventHandler){\
						GuiGraphicsComposition* composition=thisObject->SafeAggregationCast<GuiGraphicsComposition>();\
						if(!addEventHandler && !composition->HasEventReceiver())\
						{\
							return (GuiGraphicsEvent<GuiEventArgumentTypeRetriver<decltype(&GuiGraphicsEventReceiver::EVENTNAME)>::Type>*)0;\
						}\
						return &composition->GetEventReceiver()->EVENTNAME;\
					},\
					true\
				)\
			);\

#define CLASS_MEMBER_PROPERTY_GUIEVENT_FAST(PROPERTYNAME)\
			CLASS_MEMBER_GUIEVENT(PROPERTYNAME##Changed)\
			CLASS_MEMBER_PROPERTY_EVENT_FAST(PROPERTYNAME, PROPERTYNAME##Changed)\

#define CLASS_MEMBER_PROPERTY_GUIEVENT_READONLY_FAST(PROPERTYNAME)\
			CLASS_MEMBER_GUIEVENT(PROPERTYNAME##Changed)\
			CLASS_MEMBER_PROPERTY_EVENT_READONLY_FAST(PROPERTYNAME, PROPERTYNAME##Changed)\

#define GUIEVENT_HANDLER_PARAMETERS {L"sender", L"arguments"}

#define CLASS_MEMBER_GUIEVENT_HANDLER(FUNCTIONNAME, ARGUMENTTYPE)\
			CLASS_MEMBER_EXTERNALMETHOD_INVOKETEMPLATE(\
				FUNCTIONNAME,\
				GUIEVENT_HANDLER_PARAMETERS,\
				void(ClassType::*)(vl::presentation::compositions::GuiGraphicsComposition*, ARGUMENTTYPE*),\
				[](ClassType* owner, vl::presentation::compositions::GuiGraphicsComposition* sender, ARGUMENTTYPE* arguments)\
				{\
					owner->FUNCTIONNAME(sender, *arguments);\
				},\
				L"[](auto owner, auto sender, auto arguments){ return owner->$Name(sender, *arguments); }($This, $Arguments)")\

/***********************************************************************
Interface Proxy (Compositions)
***********************************************************************/

			BEGIN_INTERFACE_PROXY_NOPARENT_SHAREDPTR(presentation::compositions::IGuiGraphicsAnimation)
				vint GetTotalLength()override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(GetTotalLength);
				}

				vint GetCurrentPosition()override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(GetCurrentPosition);
				}

				void Play(vint currentPosition, vint totalLength)override
				{
					INVOKE_INTERFACE_PROXY(Play, currentPosition, totalLength);
				}

				void Stop()override
				{
					INVOKE_INTERFACE_PROXY_NOPARAMS(Stop);
				}
			END_INTERFACE_PROXY(presentation::compositions::IGuiGraphicsAnimation)

			BEGIN_INTERFACE_PROXY_NOPARENT_SHAREDPTR(presentation::compositions::IGuiAxis)
				presentation::Size RealSizeToVirtualSize(presentation::Size size)override
				{
					INVOKEGET_INTERFACE_PROXY(RealSizeToVirtualSize, size);
				}

				presentation::Size VirtualSizeToRealSize(presentation::Size size)override
				{
					INVOKEGET_INTERFACE_PROXY(VirtualSizeToRealSize, size);
				}

				presentation::Point RealPointToVirtualPoint(presentation::Size realFullSize, presentation::Point point)override
				{
					INVOKEGET_INTERFACE_PROXY(RealPointToVirtualPoint, realFullSize, point);
				}

				presentation::Point VirtualPointToRealPoint(presentation::Size realFullSize, presentation::Point point)override
				{
					INVOKEGET_INTERFACE_PROXY(VirtualPointToRealPoint, realFullSize, point);
				}

				presentation::Rect RealRectToVirtualRect(presentation::Size realFullSize, presentation::Rect rect)override
				{
					INVOKEGET_INTERFACE_PROXY(RealRectToVirtualRect, realFullSize, rect);
				}

				presentation::Rect VirtualRectToRealRect(presentation::Size realFullSize, presentation::Rect rect)override
				{
					INVOKEGET_INTERFACE_PROXY(VirtualRectToRealRect, realFullSize, rect);
				}

				presentation::Margin RealMarginToVirtualMargin(presentation::Margin margin)override
				{
					INVOKEGET_INTERFACE_PROXY(RealMarginToVirtualMargin, margin);
				}

				presentation::Margin VirtualMarginToRealMargin(presentation::Margin margin)override
				{
					INVOKEGET_INTERFACE_PROXY(VirtualMarginToRealMargin, margin);
				}

				presentation::compositions::KeyDirection RealKeyDirectionToVirtualKeyDirection(presentation::compositions::KeyDirection key)override
				{
					INVOKEGET_INTERFACE_PROXY(RealKeyDirectionToVirtualKeyDirection, key);
				}
			END_INTERFACE_PROXY(presentation::compositions::IGuiAxis)

/***********************************************************************
Interface Proxy (Controls)
***********************************************************************/

			BEGIN_INTERFACE_PROXY_NOPARENT_SHAREDPTR(presentation::controls::GuiListControl::IItemProviderCallback)

				void OnAttached(presentation::controls::GuiListControl::IItemProvider* provider)override
				{
					INVOKE_INTERFACE_PROXY(OnAttached, provider);
				}

				void OnItemModified(vint start, vint count, vint newCount)override
				{
					INVOKE_INTERFACE_PROXY(OnItemModified, start, count, newCount);
				}
			END_INTERFACE_PROXY(presentation::controls::GuiListControl::IItemProviderCallback)

			BEGIN_INTERFACE_PROXY_NOPARENT_SHAREDPTR(presentation::controls::GuiListControl::IItemProvider)

				bool AttachCallback(presentation::controls::GuiListControl::IItemProviderCallback* value)override
				{
					INVOKEGET_INTERFACE_PROXY(AttachCallback, value);
				}

				bool DetachCallback(presentation::controls::GuiListControl::IItemProviderCallback* value)override
				{
					INVOKEGET_INTERFACE_PROXY(DetachCallback, value);
				}

				void PushEditing()override
				{
					INVOKE_INTERFACE_PROXY_NOPARAMS(PushEditing);
				}

				bool PopEditing()override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(PopEditing);
				}

				bool IsEditing()override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(IsEditing);
				}

				vint Count()override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(Count);
				}

				WString GetTextValue(vint itemIndex)override
				{
					INVOKEGET_INTERFACE_PROXY(GetTextValue, itemIndex);
				}

				description::Value GetBindingValue(vint itemIndex)override
				{
					INVOKEGET_INTERFACE_PROXY(GetBindingValue, itemIndex);
				}

				IDescriptable* RequestView(const WString& identifier)override
				{
					INVOKEGET_INTERFACE_PROXY(RequestView, identifier);
				}
			END_INTERFACE_PROXY(presentation::controls::GuiListControl::IItemProvider)
			
			BEGIN_INTERFACE_PROXY_SHAREDPTR(presentation::controls::GuiListControl::IItemArranger,
				presentation::controls::GuiListControl::IItemProviderCallback
				)

				void AttachListControl(presentation::controls::GuiListControl* value)override
				{
					INVOKE_INTERFACE_PROXY(AttachListControl, value);
				}

				void DetachListControl()override
				{
					INVOKE_INTERFACE_PROXY_NOPARAMS(DetachListControl);
				}

				presentation::controls::GuiListControl::IItemArrangerCallback* GetCallback()override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(GetCallback);
				}

				void SetCallback(presentation::controls::GuiListControl::IItemArrangerCallback* value)override
				{
					INVOKE_INTERFACE_PROXY(SetCallback, value);
				}

				presentation::Size GetTotalSize()override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(GetTotalSize);
				}

				presentation::controls::GuiListControl::ItemStyle* GetVisibleStyle(vint itemIndex)override
				{
					INVOKEGET_INTERFACE_PROXY(GetVisibleStyle, itemIndex);
				}

				vint GetVisibleIndex(presentation::controls::GuiListControl::ItemStyle* style)override
				{
					INVOKEGET_INTERFACE_PROXY(GetVisibleIndex, style);
				}

				void OnViewChanged(presentation::Rect bounds)override
				{
					INVOKE_INTERFACE_PROXY(OnViewChanged, bounds);
				}

				vint FindItem(vint itemIndex, presentation::compositions::KeyDirection key)override
				{
					INVOKEGET_INTERFACE_PROXY(FindItem, itemIndex, key);
				}

				bool EnsureItemVisible(vint itemIndex)override
				{
					INVOKEGET_INTERFACE_PROXY(EnsureItemVisible, itemIndex);
				}

				presentation::Size GetAdoptedSize(presentation::Size expectedSize)override
				{
					INVOKEGET_INTERFACE_PROXY(GetAdoptedSize, expectedSize);
				}
			END_INTERFACE_PROXY(presentation::controls::GuiListControl::IItemArranger)

			BEGIN_INTERFACE_PROXY_NOPARENT_SHAREDPTR(presentation::controls::list::ITextItemView)

				bool GetChecked(vint itemIndex)override
				{
					INVOKEGET_INTERFACE_PROXY(GetChecked, itemIndex);
				}

				void SetChecked(vint itemIndex, bool value)override
				{
					INVOKE_INTERFACE_PROXY(SetChecked, itemIndex, value);
				}
			END_INTERFACE_PROXY(presentation::controls::list::ITextItemView)

			BEGIN_INTERFACE_PROXY_NOPARENT_SHAREDPTR(presentation::controls::list::IListViewItemView)

				Ptr<presentation::GuiImageData> GetSmallImage(vint itemIndex)override
				{
					INVOKEGET_INTERFACE_PROXY(GetSmallImage, itemIndex);
				}

				Ptr<presentation::GuiImageData> GetLargeImage(vint itemIndex)override
				{
					INVOKEGET_INTERFACE_PROXY(GetLargeImage, itemIndex);
				}

				WString GetText(vint itemIndex)override
				{
					INVOKEGET_INTERFACE_PROXY(GetText, itemIndex);
				}

				WString GetSubItem(vint itemIndex, vint index)override
				{
					INVOKEGET_INTERFACE_PROXY(GetSubItem, itemIndex, index);
				}

				vint GetDataColumnCount()override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(GetDataColumnCount);
				}

				vint GetDataColumn(vint index)override
				{
					INVOKEGET_INTERFACE_PROXY(GetDataColumn, index);
				}

				vint GetColumnCount()override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(GetColumnCount);
				}

				WString GetColumnText(vint index)override
				{
					INVOKEGET_INTERFACE_PROXY(GetColumnText, index);
				}
			END_INTERFACE_PROXY(presentation::controls::list::IListViewItemView)

			BEGIN_INTERFACE_PROXY_NOPARENT_SHAREDPTR(presentation::controls::list::ListViewColumnItemArranger::IColumnItemView)

				bool AttachCallback(presentation::controls::list::ListViewColumnItemArranger::IColumnItemViewCallback* value)override
				{
					INVOKEGET_INTERFACE_PROXY(AttachCallback, value);
				}

				bool DetachCallback(presentation::controls::list::ListViewColumnItemArranger::IColumnItemViewCallback* value)override
				{
					INVOKEGET_INTERFACE_PROXY(DetachCallback, value);
				}

				vint GetColumnSize(vint index)override
				{
					INVOKEGET_INTERFACE_PROXY(GetColumnSize, index);
				}

				void SetColumnSize(vint index, vint value)override
				{
					INVOKE_INTERFACE_PROXY(SetColumnSize, index, value);
				}

				presentation::controls::GuiMenu* GetDropdownPopup(vint index)override
				{
					INVOKEGET_INTERFACE_PROXY(GetDropdownPopup, index);
				}

				presentation::controls::ColumnSortingState GetSortingState(vint index)override
				{
					INVOKEGET_INTERFACE_PROXY(GetSortingState, index);
				}
			END_INTERFACE_PROXY(presentation::controls::list::ListViewColumnItemArranger::IColumnItemView)

			BEGIN_INTERFACE_PROXY_NOPARENT_SHAREDPTR(presentation::controls::tree::INodeProvider)

				bool GetExpanding()override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(GetExpanding);
				}

				void SetExpanding(bool value)override
				{
					INVOKE_INTERFACE_PROXY(SetExpanding, value);
				}

				vint CalculateTotalVisibleNodes()override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(CalculateTotalVisibleNodes);
				}

				vint GetChildCount()override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(GetChildCount);
				}

				presentation::controls::tree::INodeProvider* GetParent()override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(GetParent);
				}

				presentation::controls::tree::INodeProvider* GetChild(vint index)override
				{
					INVOKEGET_INTERFACE_PROXY(GetChild, index);
				}

				void Increase()override
				{
					INVOKE_INTERFACE_PROXY_NOPARAMS(Increase);
				}

				void Release()override
				{
					INVOKE_INTERFACE_PROXY_NOPARAMS(Release);
				}
			END_INTERFACE_PROXY(presentation::controls::tree::INodeProvider)

			BEGIN_INTERFACE_PROXY_NOPARENT_SHAREDPTR(presentation::controls::tree::INodeRootProvider)

				presentation::controls::tree::INodeProvider* GetRootNode()override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(GetRootNode);
				}

				bool CanGetNodeByVisibleIndex()override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(CanGetNodeByVisibleIndex);
				}

				presentation::controls::tree::INodeProvider* GetNodeByVisibleIndex(vint index)override
				{
					INVOKEGET_INTERFACE_PROXY(GetNodeByVisibleIndex, index);
				}

				bool AttachCallback(presentation::controls::tree::INodeProviderCallback* value)override
				{
					INVOKEGET_INTERFACE_PROXY(AttachCallback, value);
				}

				bool DetachCallback(presentation::controls::tree::INodeProviderCallback* value)override
				{
					INVOKEGET_INTERFACE_PROXY(DetachCallback, value);
				}

				WString GetTextValue(presentation::controls::tree::INodeProvider* node)override
				{
					INVOKEGET_INTERFACE_PROXY(GetTextValue, node);
				}

				description::Value GetBindingValue(presentation::controls::tree::INodeProvider* node)override
				{
					INVOKEGET_INTERFACE_PROXY(GetBindingValue, node);
				}

				IDescriptable* RequestView(const WString& identifier)override
				{
					INVOKEGET_INTERFACE_PROXY(RequestView, identifier);
				}
			END_INTERFACE_PROXY(presentation::controls::tree::INodeRootProvider)

			BEGIN_INTERFACE_PROXY_NOPARENT_SHAREDPTR(presentation::controls::tree::INodeItemView)

				presentation::controls::tree::INodeProvider* RequestNode(vint index)override
				{
					INVOKEGET_INTERFACE_PROXY(RequestNode, index);
				}

				void ReleaseNode(presentation::controls::tree::INodeProvider* node)override
				{
					INVOKE_INTERFACE_PROXY(ReleaseNode, node);
				}

				vint CalculateNodeVisibilityIndex(presentation::controls::tree::INodeProvider* node)override
				{
					INVOKEGET_INTERFACE_PROXY(CalculateNodeVisibilityIndex, node);
				}
			END_INTERFACE_PROXY(presentation::controls::tree::INodeItemView)

			BEGIN_INTERFACE_PROXY_NOPARENT_SHAREDPTR(presentation::controls::tree::ITreeViewItemView)

				Ptr<presentation::GuiImageData> GetNodeImage(presentation::controls::tree::INodeProvider* node)override
				{
					INVOKEGET_INTERFACE_PROXY(GetNodeImage, node);
				}
			END_INTERFACE_PROXY(presentation::controls::tree::ITreeViewItemView)

			BEGIN_INTERFACE_PROXY_NOPARENT_SHAREDPTR(presentation::controls::list::IDataGridContext)

				presentation::controls::GuiListControl::IItemProvider* GetItemProvider()override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(GetItemProvider);
				}

				presentation::controls::GuiListViewBase::IStyleProvider* GetListViewStyleProvider()override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(GetListViewStyleProvider);
				}

				presentation::description::Value GetViewModelContext()override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(GetViewModelContext);
				}

				void RequestSaveData()override
				{
					INVOKE_INTERFACE_PROXY_NOPARAMS(RequestSaveData);
				}

			END_INTERFACE_PROXY(presentation::controls::list::IDataGridContext)

			BEGIN_INTERFACE_PROXY_NOPARENT_SHAREDPTR(presentation::controls::list::IDataGridView)

				description::Value GetViewModelContext()override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(GetViewModelContext);
				}

				bool IsColumnSortable(vint column)override
				{
					INVOKEGET_INTERFACE_PROXY(IsColumnSortable, column);
				}

				void SortByColumn(vint column, bool ascending)override
				{
					INVOKE_INTERFACE_PROXY(SortByColumn, column, ascending);
				}

				vint GetSortedColumn()override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(GetSortedColumn);
				}

				bool IsSortOrderAscending()override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(IsSortOrderAscending);
				}

				vint GetCellSpan(vint row, vint column)override
				{
					INVOKEGET_INTERFACE_PROXY(GetCellSpan, row, column);
				}

				presentation::controls::list::IDataVisualizerFactory* GetCellDataVisualizerFactory(vint row, vint column)override
				{
					INVOKEGET_INTERFACE_PROXY(GetCellDataVisualizerFactory, row, column);
				}

				presentation::controls::list::IDataEditorFactory* GetCellDataEditorFactory(vint row, vint column)override
				{
					INVOKEGET_INTERFACE_PROXY(GetCellDataEditorFactory, row, column);
				}

				Value GetBindingCellValue(vint row, vint column)override
				{
					INVOKEGET_INTERFACE_PROXY(GetBindingCellValue, row, column);
				}

				void SetBindingCellValue(vint row, vint column, const Value& value)override
				{
					INVOKE_INTERFACE_PROXY(SetBindingCellValue, row, column, value);
				}
			END_INTERFACE_PROXY(presentation::controls::list::IDataGridView)

			BEGIN_INTERFACE_PROXY_NOPARENT_SHAREDPTR(presentation::controls::list::IDataProcessorCallback)

				presentation::controls::GuiListControl::IItemProvider* GetItemProvider()override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(GetItemProvider);
				}

				void OnProcessorChanged()override
				{
					INVOKE_INTERFACE_PROXY_NOPARAMS(OnProcessorChanged);
				}

			END_INTERFACE_PROXY(presentation::controls::list::IDataFilterCallback)

			BEGIN_INTERFACE_PROXY_NOPARENT_SHAREDPTR(presentation::controls::list::IDataFilter)

				void SetCallback(presentation::controls::list::IDataProcessorCallback* value)override
				{
					INVOKE_INTERFACE_PROXY(SetCallback, value);
				}

				bool Filter(const Value& row)override
				{
					INVOKEGET_INTERFACE_PROXY(Filter, row);
				}
			END_INTERFACE_PROXY(presentation::controls::list::IDataFilter)

			BEGIN_INTERFACE_PROXY_NOPARENT_SHAREDPTR(presentation::controls::list::IDataSorter)

				void SetCallback(presentation::controls::list::IDataProcessorCallback* value)override
				{
					INVOKE_INTERFACE_PROXY(SetCallback, value);
				}

				vint Compare(const Value& row1, const Value& row2)override
				{
					INVOKEGET_INTERFACE_PROXY(Compare, row1, row2);
				}
			END_INTERFACE_PROXY(presentation::controls::list::IDataSorter)

#pragma warning(pop)

#endif

		}
	}
}

#endif