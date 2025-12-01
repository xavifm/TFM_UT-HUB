#pragma once

#include "ControllerBase.generated.h"


UCLASS()
class UControllerBase : public UClass
{
	GENERATED_BODY()
	
public:
	UControllerBase() = default;
	
	~UControllerBase() = default;
	
	virtual void Start() {};
	
	virtual void Exit() {};
	
};