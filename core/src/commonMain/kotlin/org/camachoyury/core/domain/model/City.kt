package org.camachoyury.core.domain.model

import org.camachoyury.core.shared.Coord

import kotlinx.serialization.Serializable

@Serializable
data class City(val id:Long, val name: String, val coord: Coord, val country: String, var population: Int, var timezone: Int  )