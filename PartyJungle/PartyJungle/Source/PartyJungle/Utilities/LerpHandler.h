#pragma once

#ifndef Def_FLerpHandler
#define Def_FLerpHandler


#pragma region ClassDeclaration

/**
 * Auxiliar struct made for handling Lerps easily.
 * @tparam Type Type of the Lerp Value.
 */
template <typename Type>
struct FLerpHandler
{
public:
	/**
	 * Default Constructor.
	 */
	FLerpHandler() = default;

	/**
	 * Start moving to the selected target with a Lerp.
	 * @param a_InitialValue Lerp initial value.
	 * @param a_TargetValue Lerp target value.
	 * @param a_Time Lerp duration.
	 * @param a_Alpha Lerp Alpha.
	 */
	void Start(const Type& a_InitialValue, const Type& a_TargetValue, const float a_Time, const float a_Alpha = 0.0f);
	
	/**
	 * Start the Lerp without setting a Target Value. It needs to use UpdateTargetValue(...) before calling Update(...).
	 * @param a_InitialValue Lerp initial value.
	 * @param a_Time Lerp duration.
	 * @param a_Alpha Lerp Alpha.
	 */
	void Start(const Type& a_InitialValue, const float a_Time, const float a_Alpha = 0.0f);

	/**
	 * Updates Lerp Value each frame. Call from Tick(...).
	 * @param a_DeltaTime Time passed since last frame.
	 */
	void Update(const float a_DeltaTime);

	/**
	 * Updates Target Value while doing a Lerp.
	 * @param a_TargetValue Target Value.
	 */
	void UpdateTargetValue(const Type& a_TargetValue);

	/**
	 * Gets if the lerp is Active.
	 * @return True if the lerp is Active.
	 */
	bool IsActive() const { return m_Active; }

	/**
	 * Gets the current Lerp Value.
	 * @return Current Lerp Value.
	 */
	const Type& GetValue() const { return m_CurrentValue; }
	
	
private:
	Type m_CurrentValue; //!< Lerp current value.
	Type m_InitialValue; //!< Lerp initial value.
	Type m_TargetValue; //!< Lerp target value.
	float m_Time {0}; //!< Lerp duration.
	float m_Alpha {0}; //!< Lerp Alpha.
	bool m_Active {false}; //!< Gets if the Lerp is active.
	
};

#pragma endregion ClassDeclaration


#pragma region TemplateLogic

template <typename Type>
void FLerpHandler<Type>::Start(const Type& a_InitialValue, const Type& a_TargetValue, const float a_Time, const float a_Alpha)
{
	m_CurrentValue = a_InitialValue;
	m_InitialValue = a_InitialValue;
	m_TargetValue = a_TargetValue;
	m_Time = a_Time;
	m_Alpha = a_Alpha;
	m_Active = true;
}

template <typename Type>
void FLerpHandler<Type>::Start(const Type& a_InitialValue, const float a_Time, const float a_Alpha)
{
	m_CurrentValue = a_InitialValue;
	m_InitialValue = a_InitialValue;
	m_TargetValue = a_InitialValue;
	m_Time = a_Time;
	m_Alpha = a_Alpha;
	m_Active = true;
}

template <typename Type>
void FLerpHandler<Type>::Update(const float a_DeltaTime)
{
	if (IsActive())
	{
		m_Alpha += a_DeltaTime;
		float LerpValue {m_Alpha / m_Time};
		if (LerpValue >= 1.0f)
		{
			LerpValue = 1.0f;
			m_Active = false;
		}
	
		m_CurrentValue = FMath::Lerp(m_InitialValue, m_TargetValue, LerpValue);
	}
}

template <typename Type>
void FLerpHandler<Type>::UpdateTargetValue(const Type& a_TargetValue)
{
	m_TargetValue = a_TargetValue;
}

#pragma endregion TemplateLogic

#endif