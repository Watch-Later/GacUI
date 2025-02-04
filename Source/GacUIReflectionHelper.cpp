#include "GacUIReflectionHelper.h"

namespace vl
{
	namespace reflection
	{
		namespace description
		{
			using namespace glr::xml;
			using namespace stream;
			using namespace collections;
			using namespace presentation;
			using namespace presentation::elements;
			using namespace presentation::compositions;
			using namespace presentation::controls;
			using namespace presentation::theme;
			using namespace presentation::templates;

/***********************************************************************
Serialization (Color)
***********************************************************************/

			Color TypedValueSerializerProvider<Color>::GetDefaultValue()
			{
				return Color();
			}

			bool TypedValueSerializerProvider<Color>::Serialize(const Color& input, WString& output)
			{
				output = input.ToString();
				return true;
			}

			bool TypedValueSerializerProvider<Color>::Deserialize(const WString& input, Color& output)
			{
				output = Color::Parse(input);
				return true;
			}

			IBoxedValue::CompareResult TypedValueSerializerProvider<Color>::Compare(const presentation::Color& a, const presentation::Color& b)
			{
				return TypedValueSerializerProvider<vuint32_t>::Compare(a.value, b.value);
			}

/***********************************************************************
Serialization (DocumentFontSize)
***********************************************************************/

			DocumentFontSize TypedValueSerializerProvider<DocumentFontSize>::GetDefaultValue()
			{
				return DocumentFontSize();
			}

			bool TypedValueSerializerProvider<DocumentFontSize>::Serialize(const DocumentFontSize& input, WString& output)
			{
				output = input.ToString();
				return true;
			}

			bool TypedValueSerializerProvider<DocumentFontSize>::Deserialize(const WString& input, DocumentFontSize& output)
			{
				output = DocumentFontSize::Parse(input);
				return true;
			}

			IBoxedValue::CompareResult TypedValueSerializerProvider<DocumentFontSize>::Compare(const presentation::DocumentFontSize& a, const presentation::DocumentFontSize& b)
			{
				return TypedValueSerializerProvider<WString>::Compare(a.ToString(), b.ToString());
			}

/***********************************************************************
Serialization (GlobalStringKey)
***********************************************************************/

			GlobalStringKey TypedValueSerializerProvider<GlobalStringKey>::GetDefaultValue()
			{
				return GlobalStringKey();
			}

			bool TypedValueSerializerProvider<GlobalStringKey>::Serialize(const GlobalStringKey& input, WString& output)
			{
				output = input.ToString();
				return true;
			}

			bool TypedValueSerializerProvider<GlobalStringKey>::Deserialize(const WString& input, GlobalStringKey& output)
			{
				output = GlobalStringKey::Get(input);
				return true;
			}

			IBoxedValue::CompareResult TypedValueSerializerProvider<GlobalStringKey>::Compare(const presentation::GlobalStringKey& a, const presentation::GlobalStringKey& b)
			{
				return TypedValueSerializerProvider<WString>::Compare(a.ToString(), b.ToString());
			}

/***********************************************************************
External Functions (Basic)
***********************************************************************/

			Ptr<INativeImage> INativeImage_Constructor(const WString& path)
			{
				return GetCurrentController()->ImageService()->CreateImageFromFile(path);
			}

			INativeCursor* INativeCursor_Constructor1()
			{
				return GetCurrentController()->ResourceService()->GetDefaultSystemCursor();
			}

			INativeCursor* INativeCursor_Constructor2(INativeCursor::SystemCursorType type)
			{
				return GetCurrentController()->ResourceService()->GetSystemCursor(type);
			}

/***********************************************************************
External Functions (Elements)
***********************************************************************/

			text::TextLines* GuiColorizedTextElement_GetLines(GuiColorizedTextElement* thisObject)
			{
				return &thisObject->GetLines();
			}

/***********************************************************************
External Functions (Compositions)
***********************************************************************/

			void GuiTableComposition_SetRows(GuiTableComposition* thisObject, vint value)
			{
				vint columns = thisObject->GetColumns();
				if (columns <= 0) columns = 1;
				thisObject->SetRowsAndColumns(value, columns);
			}

			void GuiTableComposition_SetColumns(GuiTableComposition* thisObject, vint value)
			{
				vint row = thisObject->GetRows();
				if (row <= 0) row = 1;
				thisObject->SetRowsAndColumns(row, value);
			}

			void IGuiAltActionHost_CollectAltActions(IGuiAltActionHost* host, List<IGuiAltAction*>& actions)
			{
				Group<WString, IGuiAltAction*> group;
				host->CollectAltActions(group);
				for (vint i = 0; i < group.Count(); i++)
				{
					CopyFrom(actions, group.GetByIndex(i), true);
				}
			}
		}
	}
}