// Copyright Dimoon


#include "UI/Widget/AuraUserWidget.h"

void UAuraUserWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	//此方法在蓝图中调用
	WidgetControllerSet();
}
