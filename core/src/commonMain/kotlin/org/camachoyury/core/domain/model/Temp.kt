package org.camachoyury.core.domain.model

import kotlinx.serialization.Serializable

@Serializable
data class Temp(var day: Double, var min: Double,var max: Double, var night: Double, var eve: Double, var morn: Double)