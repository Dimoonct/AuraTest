// Copyright Dimoon


#include "UI/Widget/AuraUserWidget.h"

void UAuraUserWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	//�˷�������ͼ�е���
	WidgetControllerSet();
}
